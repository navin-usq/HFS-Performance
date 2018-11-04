# HFS-Performance

Create the below directory structure: (test is the home directory)

YEAR: 2010

test/2010/unit1/change1/version1/requirement1/
test/2010/unit1/change1/version1/requirement2/
test/2010/unit1/change1/version2/ 
test/2010/unit1/change2/
test/2010/unit2/
test/2010/unit3/

YEAR:2011

test/2011/unit1/change1/version1/requirement1/
test/2011/unit1/change1/version1/requirement2/
test/2011/unit1/change1/version2/ 
test/2011/unit1/change2/
test/2011/unit2/
test/2011/unit3/

YEAR:2012

test/2012/unit1/change1/version1/requirement1/
test/2012/unit1/change1/version1/requirement2/
test/2012/unit1/change1/version2/ 
test/2012/unit1/change2/
test/2012/unit2/
test/2012/unit3/

YEAR:2013

test/2013/unit1/change1/version1/requirement1/
test/2013/unit1/change1/version1/requirement2/
test/2013/unit1/change1/version2/ 
test/2013/unit1/change2/
test/2013/unit2/
test/2013/unit3/

YEAR:2014

test/2014/unit1/change1/version1/requirement1/
test/2014/unit1/change1/version1/requirement2/
test/2014/unit1/change1/version2/ 
test/2014/unit1/change2/
test/2014/unit2/
test/2014/unit3/

In the code you have change the path to each directory.

Example: In fileCreation.cpp change the path 
"/home/navin/Desktop/filecreation/test/2010/unit1/change1/version1/requirement1/name:"

to

"(Path Where test directory exist and then) /test/2010/unit1/change1/version1/requirement1/name:"

All the Programs when Run using the commands specified, will show the execution time in seconds.

1. fileCreation.cpp - Creates 5000 random files in the directory structure defined above. 

Build the files:
g++ filecreation.cpp -o filecreation

Run the files:
usr/bin/time -f "\n\nProcess Time : %e\n" ./filecreation


2. fileUpdate.cpp - updates 5000 files with new names in the directory structure defined above.

Build the files:
g++ fileUpdate.cpp -o fileUpdate

Run the files:
usr/bin/time -f "\n\nProcess Time : %e\n" ./fileUpdate


3. fileView.cpp - view 5000 files in the directory structure defined above.

Build the files:
g++ fileView.cpp -o fileView

Run the files:
usr/bin/time -f "\n\nProcess Time : %e\n" ./fileView


4. fileFind.cpp - search for file in the directory structure defined above.

deafult search value "char findName[100] = "name:zKae6";"
You can change this value if you wish. Browse the file structure for other Names.

Build the files:
g++ fileFind.cpp -o fileFind

Run the files:
usr/bin/time -f "\n\nProcess Time : %e\n" ./fileFind



