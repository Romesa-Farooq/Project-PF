#include <iostream>
#include <string>
using namespace std;
const int MAX_EXPENSES=100;

void addExpense(string categories[], float amounts[], int &size);
void summary(string categories[], float amounts[], int size);
void tips(string categories[], float amounts[], int size);

int main(){
    string categories[MAX_EXPENSES];
    float amounts[MAX_EXPENSES];
    int size=0;

    while(true){
        
        cout<<"Expense Tracker Menu:"<<endl;
        cout<<"1. Add Expense"<<endl;
        cout<<"2. Show Expense Summary"<<endl;
        cout<<"3. Get Tips to Save Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        int choice;
        cin>>choice;

        if(choice == 1){
            addExpense(categories, amounts, size);
        } else if (choice == 2){
            summary(categories, amounts, size);
        } else if (choice == 3){
            tips(categories, amounts, size);
        } else if (choice == 4){
            cout<<"Exiting the program."<<endl;
            break;
        } else{
            cout<<"Invalid choice. Please try again."<<endl;
        }
    }

    return 0;
}
void addExpense(string categories[], float amounts[], int &size) {
    if (size >= MAX_EXPENSES){
        cout << "Expense tracker is full.\n";
        return;
    }

    cout << "Choose a category for your expense: "<<endl;
    cout << "1. Food"<<endl;
    cout << "2. Transport"<<endl;
    cout << "3. School"<<endl;
    cout << "Enter your choice (1-3): "<<endl;
    int choice;
    cin >> choice;

    string selectedCategory;
    if (choice == 1){
        selectedCategory= "Food";
    } else if (choice == 2){
        selectedCategory = "Transport";
    } else if (choice == 3){
        selectedCategory = "School";
    } else {
        cout<<"Invalid choice. Please try again."<<endl;
        return;
    }

    cout<<"Enter the amount spent: ";
    cin>>amounts[size];

    if (amounts[size]<0){
        cout<<"Amount cannot be negative. Please try again."<<endl;
        return;
    }

    categories[size] = selectedCategory;
    cout<<"Expense added successfully in category: "<<selectedCategory<<endl<<endl;
    size++;
}



void summary(string categories[], float amounts[], int size){
    if(size == 0){
        cout<<"No expenses to display!"<<endl;
        return;
    }
    float total=0, maxExpense=0;
    string maxCategory;

    for (int i=0;i<size;i++){
        total+=amounts[i];
        if(amounts[i]>maxExpense){
            maxExpense=amounts[i];
            maxCategory=categories[i];
        }
    }

    cout<<"Expense Summary:"<<endl;
    cout<<"Total Expense: "<<total<<endl;
    cout<<"Highest Expense: "<<maxExpense<<" ("<<maxCategory<<")"<<endl<<endl;
}


void tips(string categories[], float amounts[], int size) {
    if(size == 0) {
        cout << "No expenses to analyze for tips."<<endl;
        return;
    }

    cout<<"Tips to Save Money:"<<endl;
    for(int i=0; i<size; i++){
        if(categories[i]=="Food" && amounts[i]>1000){
            cout<<"You're spending a lot on Food. Try cooking at home instead of eating out."<<endl;
        } else if(categories[i] == "Food"){
            cout<<"You're in a budget-friendly mode for Food expenses. Keep it up!"<<endl;
        }

        if(categories[i]=="Transport" && amounts[i]>500){
            cout<<"Transport costs are high. Consider carpooling or using public transport."<<endl;
        } else if(categories[i] == "Transport"){
            cout<<"You're in a budget-friendly mode for Transport expenses. Great job!"<<endl;
        }

        if(categories[i]=="School" && amounts[i]>2000){
            cout << "School expenses are high. Check for second-hand books or reusable supplies."<<endl;
        } else if(categories[i]=="School"){
            cout<<"You're in a budget-friendly mode for School expenses. Well done!"<<endl;
        }
    }
    cout<<"Analyze these tips to make better financial decisions!"<<endl;
}