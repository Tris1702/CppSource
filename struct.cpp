
#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Person{
	string name;
	int weight;
	int height;
	Person(){
        name="";
        weight=0;
        height=0;
    }
};

int main(){
	int n,mark;
	int maxx=0;
	cin >> n;
	vector<Person> person(n);
	for (int i = 0; i < n; i++){
        cin.ignore();
		getline(cin,person[i].name);
		cin >> person[i].weight >> person[i].height;
	}
	/*for (int i = 0; i < n; i++){
		if (person[i].weight > maxx){
			maxx = person[i].weight;
			mark = i;
		}
		else if (person[i].weight = maxx){
			if (person[i].height > person[mark].height){
				mark = i;
			}
		}
	}
	cout << person[mark].name;*/

	return 0;
}
