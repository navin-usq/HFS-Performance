#include<iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <dirent.h>

static char* gen_random(char *s, const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;

		return s;
}

int main () {
   int ret;
int count =1;

//1

for(int i=0; i<6; i++)
{
   	char oldname[100];
	char newname[100];
	int re;

	DIR *d;

    	struct dirent *dir;

	if(i == 0)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/nam:", 100);
   		re = 79;
	}
	else if(i == 1)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement2/nam:", 100);
   		re = 79;
	}
	else if(i == 2)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/version2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version2/nam:", 100);
		re = 66;
	}
	else if(i == 3)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2010/unit1/change2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2010/unit1/change2/nam:", 100);
		re = 57;
	}
	else if(i == 4)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2010/unit2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2010/unit2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2010/unit2/nam:", 100);
		re = 49;
	}
	else 
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2010/unit3/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2010/unit3/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2010/unit3/nam:", 100);
		re = 49;
	}

	if (d)

    	{

        	while ((dir = readdir(d)) != NULL)

        	{
			if(strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0 )
			{
				char test[100];
   				char *random = gen_random(test, 5);
				int rw = re;
				int rd = re + 4;
				//printf("%s\n", dir->d_name);
				for(int rr=0; rr<strlen(dir->d_name); rr++)
				{
					oldname[rw] = dir->d_name[rr];
					rw++;
				}
				oldname[rw] = 0;
				for(int rr=0; rr<strlen(random); rr++)
				{
					newname[rd] = random[rr];
					rd++;
				}
				newname[rd] = 0;	
				std::cout << "\n" << oldname << " " << newname << " " << count++ << "\n";
   
   				ret = rename(oldname, newname);	
   			
				if(ret == 0) {
      				//std::cout << "File renamed successfully ";
   				} else {
      				std::cout << "\n Error: unable to rename the file: " << dir->d_name;
   				}
			}	
        	}

        	closedir(d);

    	}
}

//2
for(int i=0; i<6; i++)
{
   	char oldname[100];
	char newname[100];
	int re;

	DIR *d;

    	struct dirent *dir;

	if(i == 0)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement1/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement1/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement1/nam:", 100);
   		re = 79;
	}
	else if(i == 1)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement2/nam:", 100);
   		re = 79;
	}
	else if(i == 2)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change1/version2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version2/nam:", 100);
		re = 66;
	}
	else if(i == 3)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2011/unit1/change2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2011/unit1/change2/nam:", 100);
		re = 57;
	}
	else if(i == 4)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2011/unit2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2011/unit2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2011/unit2/nam:", 100);
		re = 49;
	}
	else 
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2011/unit3/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2011/unit3/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2011/unit3/nam:", 100);
		re = 49;
	}

	if (d)

    	{

        	while ((dir = readdir(d)) != NULL)

        	{
			if(strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0 )
			{
				char test[100];
   				char *random = gen_random(test, 5);
				int rw = re;
				int rd = re + 4;
				//printf("%s\n", dir->d_name);
				for(int rr=0; rr<strlen(dir->d_name); rr++)
				{
					oldname[rw] = dir->d_name[rr];
					rw++;
				}
				oldname[rw] = 0;
				for(int rr=0; rr<strlen(random); rr++)
				{
					newname[rd] = random[rr];
					rd++;
				}
				newname[rd] = 0;	
				std::cout << "\n" << oldname << " " << newname << " " << count++ << "\n";
   
   				ret = rename(oldname, newname);	
   			
				if(ret == 0) {
      				//std::cout << "File renamed successfully ";
   				} else {
      				std::cout << "\n Error: unable to rename the file: " << dir->d_name;
   				}
			}	
        	}

        	closedir(d);

    	}
}

//3
for(int i=0; i<6; i++)
{
   	char oldname[100];
	char newname[100];
	int re;

	DIR *d;

    	struct dirent *dir;

	if(i == 0)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement1/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement1/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement1/nam:", 100);
   		re = 79;
	}
	else if(i == 1)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement2/nam:", 100);
   		re = 79;
	}
	else if(i == 2)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change1/version2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version2/nam:", 100);
		re = 66;
	}
	else if(i == 3)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2012/unit1/change2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2012/unit1/change2/nam:", 100);
		re = 57;
	}
	else if(i == 4)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2012/unit2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2012/unit2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2012/unit2/nam:", 100);
		re = 49;
	}
	else 
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2012/unit3/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2012/unit3/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2012/unit3/nam:", 100);
		re = 49;
	}

	if (d)

    	{

        	while ((dir = readdir(d)) != NULL)

        	{
			if(strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0 )
			{
				char test[100];
   				char *random = gen_random(test, 5);
				int rw = re;
				int rd = re + 4;
				//printf("%s\n", dir->d_name);
				for(int rr=0; rr<strlen(dir->d_name); rr++)
				{
					oldname[rw] = dir->d_name[rr];
					rw++;
				}
				oldname[rw] = 0;
				for(int rr=0; rr<strlen(random); rr++)
				{
					newname[rd] = random[rr];
					rd++;
				}
				newname[rd] = 0;	
				std::cout << "\n" << oldname << " " << newname << " " << count++ << "\n";
   
   				ret = rename(oldname, newname);	
   			
				if(ret == 0) {
      				//std::cout << "File renamed successfully ";
   				} else {
      				std::cout << "\n Error: unable to rename the file: " << dir->d_name;
   				}
			}	
        	}

        	closedir(d);

    	}
}

//4
for(int i=0; i<6; i++)
{
   	char oldname[100];
	char newname[100];
	int re;

	DIR *d;

    	struct dirent *dir;

	if(i == 0)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement1/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement1/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement1/nam:", 100);
   		re = 79;
	}
	else if(i == 1)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement2/nam:", 100);
   		re = 79;
	}
	else if(i == 2)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change1/version2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version2/nam:", 100);
		re = 66;
	}
	else if(i == 3)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2013/unit1/change2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2013/unit1/change2/nam:", 100);
		re = 57;
	}
	else if(i == 4)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2013/unit2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2013/unit2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2013/unit2/nam:", 100);
		re = 49;
	}
	else 
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2013/unit3/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2013/unit3/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2013/unit3/nam:", 100);
		re = 49;
	}

	if (d)

    	{

        	while ((dir = readdir(d)) != NULL)

        	{
			if(strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0 )
			{
				char test[100];
   				char *random = gen_random(test, 5);
				int rw = re;
				int rd = re + 4;
				//printf("%s\n", dir->d_name);
				for(int rr=0; rr<strlen(dir->d_name); rr++)
				{
					oldname[rw] = dir->d_name[rr];
					rw++;
				}
				oldname[rw] = 0;
				for(int rr=0; rr<strlen(random); rr++)
				{
					newname[rd] = random[rr];
					rd++;
				}
				newname[rd] = 0;	
				std::cout << "\n" << oldname << " " << newname << " " << count++ << "\n";
   
   				ret = rename(oldname, newname);	
   			
				if(ret == 0) {
      				//std::cout << "File renamed successfully ";
   				} else {
      				std::cout << "\n Error: unable to rename the file: " << dir->d_name;
   				}
			}	
        	}

        	closedir(d);

    	}
}

//5
for(int i=0; i<6; i++)
{
   	char oldname[100];
	char newname[100];
	int re;

	DIR *d;

    	struct dirent *dir;

	if(i == 0)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement1/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement1/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement1/nam:", 100);
   		re = 79;
	}
	else if(i == 1)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement2/nam:", 100);
   		re = 79;
	}
	else if(i == 2)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change1/version2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version2/nam:", 100);
		re = 66;
	}
	else if(i == 3)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2014/unit1/change2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2014/unit1/change2/nam:", 100);
		re = 57;
	}
	else if(i == 4)
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2014/unit2/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2014/unit2/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2014/unit2/nam:", 100);
		re = 49;
	}
	else 
	{
		d = opendir("/home/navin/Desktop/filecreation/test/2014/unit3/");
		strncpy(oldname, "/home/navin/Desktop/filecreation/test/2014/unit3/", 100);
    		strncpy(newname, "/home/navin/Desktop/filecreation/test/2014/unit3/nam:", 100);
		re = 49;
	}

	if (d)

    	{

        	while ((dir = readdir(d)) != NULL)

        	{
			if(strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0 )
			{
				char test[100];
   				char *random = gen_random(test, 5);
				int rw = re;
				int rd = re + 4;
				//printf("%s\n", dir->d_name);
				for(int rr=0; rr<strlen(dir->d_name); rr++)
				{
					oldname[rw] = dir->d_name[rr];
					rw++;
				}
				oldname[rw] = 0;
				for(int rr=0; rr<strlen(random); rr++)
				{
					newname[rd] = random[rr];
					rd++;
				}
				newname[rd] = 0;	
				std::cout << "\n" << oldname << " " << newname << " " << count++ << "\n";
   
   				ret = rename(oldname, newname);	
   			
				if(ret == 0) {
      				//std::cout << "File renamed successfully ";
   				} else {
      				std::cout << "\n Error: unable to rename the file: " << dir->d_name;
   				}
			}	
        	}

        	closedir(d);

    	}
}
   
   return(0);

}
