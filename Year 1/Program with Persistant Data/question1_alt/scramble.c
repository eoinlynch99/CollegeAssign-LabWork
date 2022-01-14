#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *raw_file,*enc_file;
	char filename[51];
	char *file_in_ram;
	int filesize;	//the size of the file

	//set file to scramble to first argument
	if(argv[1] != NULL)
    {
        strcpy(filename,argv[1]);
    }
	//ask user to enter filename if none provided
	else
	{
		printf("Enter name of file to encrypt\n");
		scanf("%50s",filename);
	}

	//open file
	raw_file=fopen(filename,"r");
	if(raw_file==NULL)
	{
		printf("Error opening input file\n");
		return 1;
	}

	//open output file
	strcat(filename,".sbl");
	enc_file=fopen(filename,"w+");
	if(enc_file == NULL)
	{
		printf("Error opening output file \n");
		return 2;
	}

	//find filesize
	fseek(raw_file, 0, SEEK_END);
	filesize = ftell(raw_file);
	rewind(raw_file);

	//load file into ram
	file_in_ram = malloc(filesize);
	fread(file_in_ram,1,filesize,raw_file);

	//perform encryption algorithm on file
	scramble_algo(file_in_ram, filesize);

	//save encrypted file to disk
	fwrite(file_in_ram, 1, filesize, enc_file);

	//free ram taken by file and close files
	fclose(raw_file);
	fclose(enc_file);
	free(file_in_ram);
}

void scramble_algo(char *array1, int size)
{
    //initialisation of variables
    char tmp;
    int i;

    //if array size is odd, decrement size
    if(size % 2 == 1)
    {
        size--;
    } //end if

    //for loop for swapping elements
    for(i=0; i<size; i=i+2)
    {
        if(*(array1 + i) != 0 || *(array1 + (i+1)) !=0)
        {
 	       //putting *(array1 + i) into the variable tmp
 	       tmp = *(array1 + i);

 	       //putting *(array1 + (i+1)) into *(array1 + i)
 	       *(array1 + i) = *(array1 + (i+1));

 	       //putting tmp into *(array1 + (i+1))
 	       *(array1 + (i+1)) = tmp;
        }//end if
    } //end for
} //end void
