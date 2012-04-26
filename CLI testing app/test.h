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

int test()
{
	fann_type *calc_out;
	unsigned int i;
	int ret = 0;

	struct fann *ann;
	struct fann_train_data *data;	
	printf("Fixing The Trains - Test Network.\n\n");
	
	ann = fann_create_from_file("network.config");
	
	if(!ann)
	{
		printf("Error creating network --- ABORTING.\n");
		return 0;
	}
	
	data = fann_read_train_from_file("train_testing.data");
	FILE *file; 
	file = fopen("test-output.data","a+");
	for(i = 0; i < fann_length_train_data(data); i++)
	{
		fann_reset_MSE(ann);
		calc_out = fann_test(ann, data->input[i], data->output[i]);
		printf("testing (%f, %f) -> %f, should be %f, difference=%f\n",
			   data->input[i][0], data->input[i][1], calc_out[0], data->output[i][0],
			   (float) fann_abs(calc_out[0] - data->output[i][0]));
		int epoch = i+1;
		fprintf(file,"%d\t%f\n",epoch,(float) fann_abs(calc_out[0] - data->output[i][0])); /*writes*/ 
	}
	fclose(file); /*done!*/
	fann_destroy_train(data);
	fann_destroy(ann);
}