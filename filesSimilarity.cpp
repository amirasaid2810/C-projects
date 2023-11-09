#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<math.h>
#include <sstream>
#include<bits/stdc++.h>

using namespace std;

typedef map<string,int> stringmap;

int main(){
	ifstream file1,file2;
    double dotproduct;
    double nbr1, nbr2;
    double prod;
    float distance;
	stringmap map1,map2;
    cout << "\t/====================================\\" << endl;
	cout << "\t|   The document distance problem    |" << endl;
	cout << "\t\\=================================== /" << endl << endl;



  string pathFile1 , pathFile2;
    cout << "\t============================ \\" << endl;
    cout << "\t============================ \\ " << endl;
    cout << "|||| read the Two Files |||| " << endl ;
    cout << "\t============================ \\" << endl;
    cout << "\t============================ \\ " << endl;
    cout << "\n \n ";

    cout << "Put the path of the first txt file :  " << endl ;
    cin >> file1;
    cout << "\n " << endl ;
    cout << "Put the path of the second txt file :  " << endl ;
    cin >> file2;
    cout << "\n " << endl ;



    if (!file1)
        std::cout << "file 1 error" << endl;
    if (!file2)
        std::cout << "file 2 error" << endl;


    dotproduct = inner_product(map1, map2);
    cout << "the dot product of the tow vectors is :" << dotproduct << endl;

    nbr1 = Euclidean_norm(map1);
    nbr2 = Euclidean_norm(map2);
    prod = nbr1*nbr2;

    distance =dotproduct / prod;
    double res=acos(distance)*180/3.14;//we use *180/3.14 to convert result into degrees


    cout << "The distance between the documents is " << res << endl;
    cout << endl;
    cout << "--------------------------------------------------------" <<endl;
    if(res==0){
    	cout << "              The two files are the same              " << endl;
	}else if(res>0 && res<=61){
		cout << " The tow files have more similarities than differences" << endl;
	}else if (res>60 && res<90){
		cout << " The tow files have more differences than similarities" << endl;
	}else if(res>=90){
		cout << "        The two files are completely different        " << endl;
	}
     cout << "the similarity is "<< res*100<<"% ------------------------------------------------------" <<endl;
}
