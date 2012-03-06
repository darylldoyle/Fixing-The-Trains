int params()
{
	struct fann *ann;	
	printf("Fixing The Trains - Network Parameters.\n\n");
	ann = fann_create_from_file("network.config");
	
	if(!ann)
	{
		printf("Error creating network --- ABORTING.\n");
		return 0;
	}
	
	fann_print_connections(ann);
	printf("\n");
	fann_print_parameters(ann);
	fann_destroy(ann);
}