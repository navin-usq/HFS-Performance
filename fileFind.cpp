#include<iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <dirent.h>

int main(void)

{

	char findName[100] = "name:zKae6";

//std::cout << "Enter file Name to find:\n";
//std::cin >> findName;

//1
for(int i=0; i<7; i++)
{
    DIR *d;

    struct dirent *dir;

if(i == 0)
   d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/");
else if(i == 1)
   d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement2/");
else if(i == 2)
   d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/version2/");
else if(i == 3)
   d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change1/");
else if(i == 4)
   d = opendir("/home/navin/Desktop/filecreation/test/2010/unit1/change2/");
else if(i == 5)
   d = opendir("/home/navin/Desktop/filecreation/test/2010/unit2/");
else
   d = opendir("/home/navin/Desktop/filecreation/test/2010/unit3/");

    if (d)

    {

        while ((dir = readdir(d)) != NULL)

        {
		if(strcmp(dir->d_name, findName) == 0)
		{
			printf("%s\n", dir->d_name);
		}

        }

        closedir(d);

    }
}

//2
for(int i=0; i<7; i++)
{
    DIR *d;

    struct dirent *dir;

if(i == 0)
   d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement1/");
else if(i == 1)
   d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement2/");
else if(i == 2)
   d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change1/version2/");
else if(i == 3)
   d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change1/");
else if(i == 4)
   d = opendir("/home/navin/Desktop/filecreation/test/2011/unit1/change2/");
else if(i == 5)
   d = opendir("/home/navin/Desktop/filecreation/test/2011/unit2/");
else
   d = opendir("/home/navin/Desktop/filecreation/test/2011/unit3/");

    if (d)

    {

        while ((dir = readdir(d)) != NULL)

        {
		if(strcmp(dir->d_name, findName) == 0)
		{
			printf("%s\n", dir->d_name);
		}

        }

        closedir(d);

    }
}


//3
for(int i=0; i<7; i++)
{
    DIR *d;

    struct dirent *dir;

if(i == 0)
   d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement1/");
else if(i == 1)
   d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement2/");
else if(i == 2)
   d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change1/version2/");
else if(i == 3)
   d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change1/");
else if(i == 4)
   d = opendir("/home/navin/Desktop/filecreation/test/2012/unit1/change2/");
else if(i == 5)
   d = opendir("/home/navin/Desktop/filecreation/test/2012/unit2/");
else
   d = opendir("/home/navin/Desktop/filecreation/test/2012/unit3/");

    if (d)

    {

        while ((dir = readdir(d)) != NULL)

        {
		if(strcmp(dir->d_name, findName) == 0)
		{
			printf("%s\n", dir->d_name);
		}

        }

        closedir(d);

    }
}


//4
for(int i=0; i<7; i++)
{
    DIR *d;

    struct dirent *dir;

if(i == 0)
   d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement1/");
else if(i == 1)
   d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement2/");
else if(i == 2)
   d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change1/version2/");
else if(i == 3)
   d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change1/");
else if(i == 4)
   d = opendir("/home/navin/Desktop/filecreation/test/2013/unit1/change2/");
else if(i == 5)
   d = opendir("/home/navin/Desktop/filecreation/test/2013/unit2/");
else
   d = opendir("/home/navin/Desktop/filecreation/test/2013/unit3/");

    if (d)

    {

        while ((dir = readdir(d)) != NULL)

        {
		if(strcmp(dir->d_name, findName) == 0)
		{
			printf("%s\n", dir->d_name);
		}

        }

        closedir(d);

    }
}


//5
for(int i=0; i<7; i++)
{
    DIR *d;

    struct dirent *dir;

if(i == 0)
   d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement1/");
else if(i == 1)
   d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement2/");
else if(i == 2)
   d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change1/version2/");
else if(i == 3)
   d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change1/");
else if(i == 4)
   d = opendir("/home/navin/Desktop/filecreation/test/2014/unit1/change2/");
else if(i == 5)
   d = opendir("/home/navin/Desktop/filecreation/test/2014/unit2/");
else
   d = opendir("/home/navin/Desktop/filecreation/test/2014/unit3/");

    if (d)

    {

        while ((dir = readdir(d)) != NULL)

        {
		if(strcmp(dir->d_name, findName) == 0)
		{
			printf("%s\n", dir->d_name);
		}

        }

        closedir(d);

    }
}




    return(0);

}
