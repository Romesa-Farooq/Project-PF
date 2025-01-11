#Expense Tracker
#Features:
Add Expense: Users can input their expenses categorized by type and amount.
Show Expense Summary: Displays the total expenses and the highest expense category.
Get Tips to Save Money: Provides personalized tips based on the user's spending patterns.
Exit: Allows users to exit the application.
#Prerequisites:
To run this program, you need:
A C++ compiler (e.g., g++, clang++)
A terminal or command prompt
#Functions:
1. AddExpense
This function is responsible for adding new expense entries. It takes in arrays for categories and amounts, along with a reference to the size of the array, allowing it to update the size as new expenses are added.
2. Summary
The summary function calculates and displays:
Total expenses across all categories.
The highest individual expense and its corresponding category.
If there are no expenses recorded, it informs the user accordingly.
3. Tips
(The tips function analyzes spending in specific categories and provides tailored advice)
If spending on Food exceeds $1000, it suggests cooking at home.
If spending on Transport exceeds $500, it recommends carpooling or public transport.
If spending on School exceeds $2000, it advises checking for second-hand books or reusable supplies.
If there are no expenses recorded, it informs the user that there are no expenses to analyze.
