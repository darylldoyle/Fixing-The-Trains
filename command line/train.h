int FANN_API test_callback(struct fann *ann, struct fann_train_data *train,
	unsigned int max_epochs, unsigned int epochs_between_reports, 
	float desired_error, unsigned int epochs)
{
	printf("Epochs     %8d. MSE: %.5f. Desired-MSE: %.5f\n", epochs, fann_get_MSE(ann), desired_error);
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

	fann_set_train_stop_function(ann, FANN_STOPFUNC_BIT);
	fann_set_bit_fail_limit(ann, 0.01f);

	fann_init_weights(ann, data);
	
	printf("Training network.\n");
	fann_train_on_data(ann, data, max_epochs, epochs_between_reports, desired_error);
	
	fann_save(ann, "network.config");
	fann_destroy_train(data);
	fann_destroy(ann);

}
