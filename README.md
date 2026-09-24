# Library System
## Introduction
### Background of the project
This is a library system aims to improve the user experience of Hong Kong Public Libraries (HKPL). This project will have two account types, admin and user. The project have two parts, this git repository contains code files and executable file. This system uses CPP + QT, uses sqlite for database.

### The key functions include:
  1. Seperate user and admin window, showing different list for didferent purpose and user.
  2. Create, Read, Update, and Delete. (For delete, only book deletion is released. User deletion will be include in future release.)
  3. Book borrowing and returning, logging borrow and return transactions

> [!NOTE]
> Book and patron management will be include in future release.

> [!WARNING]
> Name of user window will be StudentWindow, as it is a development bug which is not significantly affecting execution of the system.

## Recommand Enviroment

- Required 64-bit processor and system
- System: Window 10 - 64-bit
- Processor: Intel i5 10500 or AMD Ryzen 7
- Memory: 2 GB memory
- Graphics Card: Any
- Storage: 900 MB free space

(900 Space requirement is for whole file. If you want app only, please refer to the [read me in LibrarySystem_AppOnly](LibrarySystem_AppOnly/README.md).)

## Windows Setup

Some notes on Windows setup:

SQLite setup
  - Open this link to download [DBbroswer for SQLite](https://sqlitebrowser.org/dl/)
  - Select the DB Browser for SQLite - Standard installer for 64-bit Windows
  - Double click the installer and let it do it's work

## Programming Language Used
For this project, I have choosen CPP + QT as the programming language. CPP provides high preformance and deep system-level control when it combines with Qt framework, while Qt provides a drag-and-drop method to create an app and also clear signal and slot communiaction between UI elements and logics. Although CPP is not a mainstream programming language for app design, I still use it as it is easy to learn and debug with Qt creator.

## Program Specification
### <ins>Specification for Login Procedure</ins>
- App testers can login refering the accounts in [database](build/Desktop_Qt_6_11_1_MinGW_64_bit_Debug/debug/data.sqlite) for this project. If app testers want to test new account, you will have to login to admin window by using `admin`, `123` as username and password respectively.

> [!NOTE]
> For user login, user and user2 is given accounts for tesing the borrow or other functions that need to use normal user account, with password 123.

### <ins>Specification for Recovering Account Procedure</ins>
- This procedure requires account id and username. After providing these two informations, password will be show to user if the account id and username matches.

### <ins>Specification for Search Book Procedure</ins>
- `QString` is used for prepareing SQL query in this procedure. In this way the criteria of searching the book will be accurate enough for user. For example, if user select `radioButton_Available`, the `QString` of the SQL query will be change from `SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != ''` --> `SELECT * FROM metadata WHERE bookcode IS NOT NULL AND bookcode != '' AND status = 'in display'`.

### <ins>Specification for Borrow, Return, Renew Procedures</ins>
- In these procedures, users or admin (will be mentioned as users in this paragraph) have to input into typebox based on item of `QComboBox` selected by user. Users can input only few characters to search the book, for example users can input `The Declaration` for searching `The Declaration of Independence of the United States of America`.

### <ins>Borrow Procedure</ins>
- Each user can borrow maximum 10 books, each book for 14 days, excluded weekends. If the borrowing number reach 5, `pushbutton_Borrow` will be set to unable, which means user cannot borrow anymore books unless they return.

### <ins>Return Procedure</ins>
- If user tries to return the book after assigned date, user will be fined for $0.5 a day, else they will return the book successfully. For fined users, they must scan QRCode shown on window and pay for the fine. After fine is recieved, return procedure finished successfully.

> [!IMPORTANT]
> QRCode currently is not a real payment code. This will be mentioned in Furture Improvement.

### <ins>Renew Procedure</ins>
- Before assigned return date, user can renew the book for a **MAXIMUM 3 TIMES**. If the book have been renewed for 3 times, `pushbutton_renew` will be set to disabled, forcing user to return the book for other users. If user wants to renew the book after assigned return date (renew time < 3), payment code will be shown before renew success.

## Screen Design
### <ins>Login Menu</ins>
<img width="798" height="535" alt="image" src="https://github.com/user-attachments/assets/9e58f9c4-c6fb-4eaf-acea-372b6bdfc454" />

### <ins>Authentication System</ins>
<img width="798" height="532" alt="image" src="https://github.com/user-attachments/assets/60c88058-c810-448d-ae5a-2515ce0e8235" />
<img width="800" height="538" alt="image" src="https://github.com/user-attachments/assets/27ecb166-e5aa-4e83-bb25-c9c56c2104b5" />

- Here is the authentication system. Users have to input the userID and password. The system will first check whether both `QLineEdit` have input, then it will check whether the userID and password are correct by searching the database. If they are valid, the system will directly close the window and show the window refering to account type. Otherwise, the `QLabel` between `pushbutton_Login` and `lineedit_Password` will show 'Warning: User or Password incorrect'.

### <ins>Account Recovery Menu</ins>
<img width="565" height="312" alt="image" src="https://github.com/user-attachments/assets/762f4999-fe01-4bdb-8ab7-f5a61e9d5117" />

<img width="571" height="315" alt="Screenshot 2026-09-23 220542" src="https://github.com/user-attachments/assets/0701263b-8839-4b0d-827a-76571ee8efba" />

- After entering correct username and account ID and active `pushbutton_Verify`, account password will be shown as above.
