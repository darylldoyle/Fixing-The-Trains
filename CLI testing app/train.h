/*

Copyright (C) 2012  Daryll Doyle

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
long with this program.  If not, see <http://www.gnu.org/licenses/>.


*/

int FANN_API test_callback(struct fann *ann, struct fann_train_data *train,
	unsigned int max_epochs, unsigned int epochs_between_reports, 
	float desired_error, unsigned int epochs)
{
	printf("Epochs     %8d. MSE: %.5f. Desired-MSE: %.5f\n", epochs, fann_get_MSE(ann), desired_error);
	FILE *file; 
	file = fopen("train-data.data","a+");
	fprintf(file,"%d\t%.9f\n",epochs,fann_get_MSE(ann)); /*writes*/ 
	fclose(file); /*done!*/
	return 0;
}

int train(const unsigned int num_input, const unsigned int num_output, const unsigned int num_neurons_hidden, const unsigned int max_epochs)
{
	fann_type *calc_out;
	// Set layers. 3 is one layer hidden
	const unsigned int num_layers = 3;
	// Desired error
	const float desired_error = (const float) 0.00;
	// Epochs between reports
	const unsigned int epochs_between_reports = 100;
	struct fann *ann;
	struct fann_train_data *data;

	unsigned int i = 0;
	unsigned int decimal_point;
	
	printf("Fixing The Trains - Train Network.\n\n");
	ann = fann_create_standard(num_layers, num_input, num_neurons_hidden, num_output);

	data = fann_read_train_from_file("train_test.data");

	fann_set_activation_steepness_hidden(ann, 1);
	fann_set_activation_steepness_output(ann, 1);

	fann_set_activation_function_hidden(ann, FANN_SIGMOID);
	fann_set_activation_function_output(ann, FANN_SIGMOID);
	
	fann_set_learning_momentum(ann, 0.3);
	fann_set_learning_rate(ann, 0.1);
	fann_set_training_algorithm(ann, FANN_TRAIN_INCREMENTAL);

	fann_set_train_stop_function(ann, FANN_STOPFUNC_BIT);
	fann_set_bit_fail_limit(ann, 0.01f);

	fann_init_weights(ann, data);
	fann_set_callback(ann, test_callback);
	printf("Training network.\n");
	fann_train_on_data(ann, data, max_epochs, epochs_between_reports, desired_error);
	
	fann_save(ann, "network.config");
	fann_destroy_train(data);
	fann_destroy(ann);

}
