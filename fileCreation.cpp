#include<iostream>
#include <math.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>


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

int main()
{
FILE *files[10024];

//1
for(int i=0; i<1000; i++)
	{
			char test[100];
			char *random = gen_random(test, 5);
			char fileCreate[100];
			int re;
			if(i < 500)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/name:", 100);
				re = 84;
			}
			else if(i < 200)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement2/name:", 100);
				re = 84;
			}
			else if(i < 400)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2010/unit1/change1/version2/name:", 100);
				re = 71;
			}
			else if(i < 600)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2010/unit1/change2/name:", 100);
				re = 62;
			}
			else if(i < 800)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2010/unit2/name:", 100);
				re = 54;
			}
			else 
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2010/unit3/name:", 100);
				re = 54;
			}
			for(int rr=0; rr<strlen(random); rr++)
			{
				fileCreate[re] = random[rr];
				re++;
			}
			fileCreate[re] = 0;

			std::cout << "\n" << fileCreate << " " << i + 1 << "\n";

    files[i] = fopen(fileCreate, "w+");
	fclose(files[i]);
	}

//2
for(int i=1000; i<2000; i++)
	{
			char test[100];
			char *random = gen_random(test, 5);
			char fileCreate[100];
			int re;
			if(i < 1100)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement1/name:", 100);
				re = 84;
			}
			else if(i < 1200)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version1/requirement2/name:", 100);
				re = 84;
			}
			else if(i < 1400)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2011/unit1/change1/version2/name:", 100);
				re = 71;
			}
			else if(i < 1600)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2011/unit1/change2/name:", 100);
				re = 62;
			}
			else if(i < 1800)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2011/unit2/name:", 100);
				re = 54;
			}
			else 
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2011/unit3/name:", 100);
				re = 54;
			}
			for(int rr=0; rr<strlen(random); rr++)
			{
				fileCreate[re] = random[rr];
				re++;
			}
			fileCreate[re] = 0;

			std::cout << "\n" << fileCreate << " " << i + 1 << "\n";

    files[i] = fopen(fileCreate, "w+");
	fclose(files[i]);
}

//3
for(int i=2000; i<3000; i++)
	{
			char test[100];
			char *random = gen_random(test, 5);
			char fileCreate[100];
			int re;
			if(i < 2100)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement1/name:", 100);
				re = 84;
			}
			else if(i < 2200)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version1/requirement2/name:", 100);
				re = 84;
			}
			else if(i < 2400)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2012/unit1/change1/version2/name:", 100);
				re = 71;
			}
			else if(i < 2600)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2012/unit1/change2/name:", 100);
				re = 62;
			}
			else if(i < 2800)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2012/unit2/name:", 100);
				re = 54;
			}
			else 
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2012/unit3/name:", 100);
				re = 54;
			}
			for(int rr=0; rr<strlen(random); rr++)
			{
				fileCreate[re] = random[rr];
				re++;
			}
			fileCreate[re] = 0;

			std::cout << "\n" << fileCreate << " " << i + 1 << "\n";

    files[i] = fopen(fileCreate, "w+");
	fclose(files[i]);
}

//4
for(int i=3000; i<4000; i++)
	{
			char test[100];
			char *random = gen_random(test, 5);
			char fileCreate[100];
			int re;
			if(i < 3100)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement1/name:", 100);
				re = 84;
			}
			else if(i < 3200)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version1/requirement2/name:", 100);
				re = 84;
			}
			else if(i < 3400)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2013/unit1/change1/version2/name:", 100);
				re = 71;
			}
			else if(i < 3600)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2013/unit1/change2/name:", 100);
				re = 62;
			}
			else if(i < 3800)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2013/unit2/name:", 100);
				re = 54;
			}
			else 
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2013/unit3/name:", 100);
				re = 54;
			}
			for(int rr=0; rr<strlen(random); rr++)
			{
				fileCreate[re] = random[rr];
				re++;
			}
			fileCreate[re] = 0;

			std::cout << "\n" << fileCreate << " " << i + 1 << "\n";

    files[i] = fopen(fileCreate, "w+");
	fclose(files[i]);
}

//5
for(int i=4000; i<5000; i++)
	{
			char test[100];
			char *random = gen_random(test, 5);
			char fileCreate[100];
			int re;
			if(i < 4100)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement1/name:", 100);
				re = 84;
			}
			else if(i < 4200)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version1/requirement2/name:", 100);
				re = 84;
			}
			else if(i < 4400)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2014/unit1/change1/version2/name:", 100);
				re = 71;
			}
			else if(i < 4600)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2014/unit1/change2/name:", 100);
				re = 62;
			}
			else if(i < 4800)
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2014/unit2/name:", 100);
				re = 54;
			}
			else 
			{
				strncpy(fileCreate, "/home/navin/Desktop/filecreation/test/2014/unit3/name:", 100);
				re = 54;
			}
			for(int rr=0; rr<strlen(random); rr++)
			{
				fileCreate[re] = random[rr];
				re++;
			}
			fileCreate[re] = 0;

			std::cout << "\n" << fileCreate << " " << i + 1 << "\n";

    files[i] = fopen(fileCreate, "w+");
	fclose(files[i]);
}

  return 0;
}


