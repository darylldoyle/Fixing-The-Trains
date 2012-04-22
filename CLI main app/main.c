#include <stdio.h>
#include <string.h>
#include <math.h>
#include "fann.h"

int main ( int argc, char *argv[] )
{
	if ( argc != 7 )
	{
		fprintf(stderr, "%s: Not enough arguments\n", argv[0]);
		exit(1);
	}
	// DATA FORMAT
	// PPM doors_open doors_locked doors_free at_station curr_speed
	// speed_to emergency_brake doors_locked doors_open
	
	struct fann *ann;
	fann_type *calc_out;
	fann_type input[6];
	//float output[4];
	input[0] = (strtof(argv[1],NULL)/420);
	input[1] = strtof(argv[2],NULL);
	input[2] = strtof(argv[3],NULL);
	input[3] = strtof(argv[4],NULL);
	input[4] = strtof(argv[5],NULL);
	input[5] = (strtof(argv[6],NULL)/55);
	
	ann = fann_create_from_file("network.config");
	
	if(!ann)
	{
		fprintf(stderr, "%s: Error creating network --- ABORTING.\n", argv[0]);
		exit(1);
	}

	calc_out = fann_run(ann, input);
	
	printf("%f\t%f\t%f\t%f\n", round(calc_out[0]*45), round(calc_out[1]), round(calc_out[2]), round(calc_out[3]));
	
	fann_destroy(ann);
}