#include<iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <dirent.h>

int main () {
   int ret;
int count =1;

//1
   	char oldname[600];
	char newname[600];
	int re;

	DIR *d;

    	struct dirent *dir;

		d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement2/", 100);
   		re = 79;

	if (d)

    	{

        	while ((dir = readdir(d)) != NULL)

        	{
			if(strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0 )
			{
				char test[100];
				int rw = re;
				//printf("%s\n", dir->d_name);
				for(int rr=0; rr<strlen(dir->d_name); rr++)
				{
					oldname[rw] = dir->d_name[rr];
					newname[rw] = dir->d_name[rr];
					rw++;
				}
				oldname[rw] = 0;
				newname[rw] = 0;	
				std::cout << "\n" << oldname << " " << newname << " " << count++ << "\n";
   
   				ret = rename(oldname, newname);	
   			
				if(ret == 0) {
      				//std::cout << "File renamed successfully ";
   				} else {
      				std::cout << "\n Error: unable to move the file: " << dir->d_name;
   				}
			}	
        	}

        	closedir(d);

    	}

}
