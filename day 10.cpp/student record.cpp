#include<iostream>
#include<utility>
#include<string>

using namespace std;

int main (){
    pair<string,int> student1 = {"rahul",85};
    
    pair<string,int> student2 = make_pair("priya",92);
    
    cout << "student 1: " << student1.first << " - marks: " << student1.second << endl;
    cout << "student 2: " << student2.first << " - marks: " << student2.second << endl; // फिक्स किया गया
    
    return 0;
}
