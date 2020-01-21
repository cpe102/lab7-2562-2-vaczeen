#include<iostream>
#include<string>
using namespace std;
int main(){
	int old;
	double tall,money;
	string status;
	cout<<"How old are you?: ";
	cin>>old;
	if(old<20){
		cout<<"How tall are you?: ";
		cin>>tall;
		if(tall<160){
			status="UNFRIEND";
		}else if(tall<175&&tall>=160){
			status="FRIEND";
		}else{
			cout<<"How much the money?: ";
			cin>>money;
		if(money>69000000){
			status="MARRIED";
		}else{
			status="ONE NIGTH STAND";
		}
		}	
	}else if(old<30){
		cout<<"How much the money?: ";
			cin>>money;
			if(money>10000000){
				status="BEST FRIEND";
			}else{
		status="UNFRIEND";
	}
	
	}else{
		status="UNFRIEND";
	}
	cout<<"status= "<<status;
	
	return 0;
}
