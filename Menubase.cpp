#include<iostream>
#include<cmath>
using namespace std;

class menubase{
	public:
		int a[20],n;
		void getdata();
		void display();
		int findmin();
		int findmax();
		int findsmax();
};
void menubase::getdata() {
    cout << "Enter How Many Numbers:" << endl;
    cin >> n;

    cout << "Enter The Array Elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void menubase::display() {
    int operation;
    do {
        cout << "\nChoose operation:" << endl;
        cout << "1. Find maximum" << endl;
        cout << "2. Find minimum" << endl;
        cout << "3. Find second maximum" << endl;
        cout << "4. Exit" << endl;
        cout<<"\n\n";
        cin >> operation;

        switch (operation) {
            case 1:
                cout << "The maximum number among the numbers is: " << findmax() << endl;
                break;
            case 2:
                cout << "The minimum number among the numbers is: " << findmin() << endl;
                break;
            case 3:
                cout << "The second maximum number is: " << findsmax() << endl;
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Error! Invalid operation. Please enter again." << endl;
                break;
        }
    } while (operation != 4);
}

int menubase::findmax(){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int menubase::findmin(){
	int min=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
int menubase::findsmax(){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	int smax=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>smax && a[i]!=max){
			smax=a[i];
		}
	}
	return smax;
}
int main(){
    menubase obj;
    obj.getdata();
    obj.display();
    return 0;
}
