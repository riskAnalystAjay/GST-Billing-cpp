 Billing System C++ (billing-system-cpp)

A console-based C++ billing system that supports:
- Customer name input  
- Multiple items (name, quantity, price)  
- Discount percentage  
- GST calculation (default 18%)  
- Formatted receipt output  

---

 🧾 About the Project
This C++ Billing System project provides a simple yet functional console-based billing application.  
It allows users to input customer details, add multiple items with their quantities and prices,  
apply discounts, and calculate GST automatically.  

The system then displays a well-formatted final receipt including all necessary details  
such as subtotal, discount amount, GST amount, and final total.  

Built with clean C++ code and proper formatting using `<iomanip>`,  
this project is ideal for beginners learning object-oriented and structured programming in C++.

 🌱 Future Improvements
- Save bills to a text file for record-keeping  
- Load product lists from external files  
- Add admin/user login options  
- Develop a graphical UI using Qt or SFML  

---

 ⚙️ Features
- Simple, beginner-friendly C++ code  
- Clear and professional bill format  
- GST & discount calculations included  
- Easy to modify and expand  

---

 📁 Files
- `main.cpp` — main source file (billing system code)  

---

 🧠 Build & Run
 💻 For Windows / Linux / macOS:
`bash
g++ -std=c++17 main.cpp -o billing
./billing

EXAMPLE

Enter customer name: Riya Sharma
Enter number of items: 2

Enter details for item 1:
Item name: Notebook
Quantity: 3
Price per item: 50

Enter details for item 2:
Item name: Pen
Quantity: 5
Price per item: 20

Enter discount percentage (0 if none): 10

Final Total: ₹265.50

