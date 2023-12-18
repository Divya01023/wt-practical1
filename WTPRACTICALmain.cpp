/////////////////////////////FORM VALIDATION  me//////////////////////////////////////////////////

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>form validation</title>
    <style>
        body {
            text-align: center;
            background-color: rgb(148, 103, 103);
            color: aliceblue;
            font-size: larger;
        }

        .user {
            margin: 20px;
            padding: 20px;
        }

        .email {
            margin: 20px;
            padding: 20px;
        }

        .mbno {
            margin: 20px;
            padding: 20px;
        }

        .pass {
            margin: 20px;
            padding: 20px;
        }

        .cpass {
            margin: 20px;
            padding: 20px;
        }

        .div1 {
            width: 500px;
            height: 900px;
            background-color: rgb(67, 43, 43);
            align-items: center;
            margin-left: 500px;
        }

        input {
            width: 300px;
            height: 20px;

        }

        .submit {
            width: 100px;
            height: 30px;
            background-color: green;
        }

        span {
            color: red;
        }
    </style>
</head>

<body>
    <div class="div1">
        <h1>Form Validation!</h1>
        <form action="form.php" method="get" onsubmit="return validate()">
            <div class="user">
                <label>Name:</label><br>
                <input type="text" id="myname"><br>
                <span id="name"></span>
            </div>

            <div class="email">
                <label>Email:</label><br>
                <input type="email" id="myemail"><br>
                <span id="email"></span>
            </div>

            <div class="mbno">
                <label>mobile no:</label><br>
                <input type="number" id="mymobile"><br>
                <span id="mobile"></span>
            </div>

            <div class="pass">
                <label>Password:</label><br>
                <input type="password" id="mypass"><br>
                <span id="password"></span>
            </div>

            <div class="cpass">
                <label>confirm password:</label>
                <input type="password" id="mycpass"><br>
                <span id="cpass"></span>
            </div>
            <input type="submit" class="submit" value="submit">


    </div>


    </form>

    </div>

    <script type="text/javascript">
        function validate() {
            var name = document.getElementById('myname').value;
            var email = document.getElementById('myemail').value;
            var password = document.getElementById('mypass').value;
            var confirmpass = document.getElementById('mycpass').value;
            var mobileno = document.getElementById('mymobile').value;
            var result = true;
            if (name == "") {
                document.getElementById('name').innerHTML = "**Please fill the username field";
                return false;
            }
            if ((name.length < 2 || name.length > 20)) {
                document.getElementById('name').innerHTML = "**username length must between 2 to 20";
                return false;
            }
            if (!isNaN(name)) {
                document.getElementById('name').innerHTML = "**only characters are allowed";
                return false;
            }

            if (email == "") {
                document.getElementById('email').innerHTML = "**Please fill the email field";
                return false;
            }
            

            if (password == "") {
                document.getElementById('password').innerHTML = "**Please fill the password field";
                return false;
            }
            if ((password.length < 8 || password.length > 20)) {
                document.getElementById('password').innerHTML = "**Password length must between 8 to 20  ";
                return false;
            }

            if (confirmpass == "") {
                document.getElementById('cpass').innerHTML = "**Please fill the confirm password field";
                return false;
            }
            if (confirmpass!=password) {
                document.getElementById('cpass').innerHTML = " **confirm password not match with password";
                return false;
            }
           

            if (mobileno == "") {
                document.getElementById('mobile').innerHTML = "**Please fill the mobile number field";
                return false;
            }
            if ((mobileno.length !=10)) {
                document.getElementById('mobile').innerHTML = "**mobile should contaun 10 digits only";
                return false;
            }
            if (isNAN(mobileno)) {
                document.getElementById('mobile').innerHTML = "**mobile should contaun only digits";
                return false;
            }

       


        }

    </script>

</body>

</html>







/////////////////////////////FORM VALIDATION  suji//////////////////////////////////////////////////

<!DOCTYPE html>
<html>
  <head>
    <title>Registration</title>
    <link rel="stylesheet" href="formv.css" type="text/css" />
  </head>

  <body>
    <div class="main">
      <div class="register">
        <h2>Register Here</h2>
        <form action='connect.php' id="register" method="post" onsubmit="return validateform()">
          <label>First Name : </label>
          <br />
          <input
            type="text"
            name="fname"
            id="fname"
            placeholder="Enter Your First Name"
            required
          />
          <span id="fnameError" style="color: red"></span>
          <!-- Error message container -->
          <br /><br />
          <label>Last Name : </label>
          <br />
          <input
            type="text"
            name="lname"
            id="lname"
            placeholder="Enter Your Last Name"
            required
          />
          <span id="lnameError" style="color: red"></span>
          <br /><br />
          <label>Your Phone No. : </label>
          <br />
          <input
            type="number"
            name="phone"
            id="phone"
            placeholder="Enter Your Phone No."
          />
          <span id="phoneError" style="color: red"></span>
          <br /><br />
          <label>Email : </label>
          <br />
          <input
            type="email"
            name="email"
            id="email"
            placeholder="Enter Your Valid Email"
            required
          />
          <br /><br />
          <label>Password : </label>
          <br />
          <input
            type="password"
            name="pass"
            id="pass"
            placeholder="Enter Your Password"
            required
          />
          <br /><br />
          <label>Confirm Password : </label>
                    <br>
                    <input type="password" name="confirmPassword" id="confirmPassword" placeholder="Confirm Your Password" required>
                    <span id="confirmPasswordError" style="color: red;"></span>
                    <br><br>
          &nbsp;&nbsp;&nbsp;
          <label>Gender : </label>
          <br />
          &nbsp;&nbsp;&nbsp;
          <input type="radio" name="gender" id="male" />
          &nbsp;
          <span id="male">Male</span>
          &nbsp;&nbsp;&nbsp;&nbsp;
          <input type="radio" name="gender" id="female" />
          &nbsp;
          <span id="female">Female</span>
          <input type="radio" name="gender" id="other" />
          &nbsp;
          <span id="other">Other</span>
          <br /><br />
          <input type="submit" id="submit" value="Submit" />
        </form>
      </div>
    </div>
    <script>
      function validateform() {
        var returnval = true;
        var fname = document.getElementById("fname");
        var fnameError = document.getElementById("fnameError");

        var lname = document.getElementById("lname");
        var lnameError = document.getElementById("lnameError");

        var phone = document.getElementById("phone");
        var phoneError = document.getElementById("phoneError");

        var pass = document.getElementById("pass");
        var passError = document.getElementById("passError");

        var confirmPassword = document.getElementById('confirmPassword');
        var confirmPasswordError = document.getElementById('confirmPasswordError');


        if (fname.value.length < 3) {
          fnameError.textContent ="*First Name should be at least 3 characters long.";
          returnval = false;
        } else {
          fnameError.textContent = ""; // Clear the error message if the input is valid
        }
        if (!/^[A-Za-z\s]+$/.test(fname.value)) 
        {
            alert("*First Name should contain only letters and spaces.");
            returnval = false;
        }
        if (lname.value.length < 3) {
          lnameError.textContent ="*Last Name should be at least 3 characters long.";
          returnval = false;
        } else {
          lnameError.textContent = "";
        }
        if (!/^[A-Za-z\s]+$/.test(lname.value)) 
        {
            alert("*Last Name should contain only letters and spaces.");
            returnval = false;
        }
        if (phone.value.length != 10) {
          phoneError.textContent = "*Phone number should be 10 digits";
          returnval = false;
        } else {
          phoneError.textContent = "";
        }
        if (pass.value.length < 8) {
          alert("*Password should be at least 8 characters long.");
          returnval = false;
        }
        if (!/[A-Z]/.test(pass.value)) 
        {
            alert("*Password should contain at least one uppercase letter.");
            returnval = false;
        }
        if (!/[a-z]/.test(pass.value)) {
            alert("*Password should contain at least one lowercase letter.");
            returnval = false;
        }
            
        if (!/[0-9]/.test(pass.value)) 
        {
            alert("*Password should contain at least one number.");
            returnval = false;
        }
        if (!/[@$!%*?&]/.test(pass.value)) 
        {
            alert("*Password should contain at least one special character.");
            returnval = false;
        }
        if (confirmPassword.value !== pass.value) 
        {
            confirmPasswordError.textContent = "*Passwords do not match.";
            returnval = false;
        } 
        else 
        {
            confirmPasswordError.textContent = "";
        }
        
        return returnval;
      }
    </script>
  </body>
</html>







/////////////////////////////FORM Login alert me//////////////////////////////////////////////////


<!doctype html>
<html>
    <head>
        <title>
            login page
        </title>
        <link rel="stylesheet" href="loginpage.css">
        <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.4.1/dist/css/bootstrap.min.css" integrity="sha384-wfSDF2E50Y2D1uUdj0O3uMBJnjuU4lh7YwaYd1iqfktj0Uod8GCExl3Og8ifwB6"crossorigin="anonymous">
    </head>
    <body>
        <h1>Welcome To Login Page!</h1>
        <div class="main">
            <h1> Registration Form</h1>
            <div class="container">

                <form>
                    <div class="info">
                    <label class="form-label" for="name">Name:</label>
                    <input type="text" id="name" placeholder="Enter your name here" required><br><br>
                    <label for="email">Email:</label>
                    <input type="text" id="email" placeholder="Enter your Email here"required><br><br>
                    <label for="pass">Password:</label>
                    <input type="text" id="pass" placeholder="Enter your password here"required><br><br>
                    <label for="pn">Contact no:</label>
                    <input type="text" id="pn" placeholder="Enter your phone no here"required><br><br>
                    <label for="date">Date</label>
                    <input type="date" id="mydate"><br>
                   
                    </div><br>
                    <label for="sub">Subject</label>
                    <select for="subject">
                        <option value="a">DAA</option>
                        <option value="a">CC</option>
                        <option value="a">EM</option>
                        <option value="a">OSA</option>
                    </select><br><br>
                    Gender:male<input type="radio" id="gender" name="gender">
                    female<input type="radio" id="gender" name="gender">
                    other<input type="radio" id="gender"name="gender"><br><br>
                    write about yourself:<br><textarea name="text" rows="10" cols="40"></textarea>
                    <br><br><button type="submit" class="btn btn-outline-primary">Submit Form</button>
                    </div>
                </form>
                <div>
            </div>
        </div>
        <script src="login.js">
            
        </script>
        
    </body>
</html>

loginpage.css
*{
   margin:0;
   padding:0;
}
body{
    text-align:center;
    background-color:black;
    font-size: large;
}
h1{
    color:white;

}
.main h1{
    color:black;
}
.main{
    width:700px;
    height:900px;
    background-color:aliceblue;
    color:black;
    margin:5rem 25rem;
    border:2px solid brown;
    border-radius:20px;
}
.main:hover{
    transform: scale(1.10);
    cursor: pointer;

}
.container{
    margin: 20px;
    padding:20px;
}
.info input{
    width:100%;
    padding:10px;
    border:2px solid rgb(78, 31, 31);
}
.info input:hover{
    border:2px solid red;
}
button{
    padding: 10px;
    margin:10px;
    border: 2px solid black;
    border-radius:10px;
    color:white;
    background-color:blue;
}
button:hover{
    border-radius: 2px solid red;
    background-color:rgb(60, 60, 215);

}
button:active{
    background-color:burlywood;

}


login.js
alert("Thanku For Visiting the page!")









/////////////////////////////todo list  me//////////////////////////////////////////////////
<!DOCTYPE html>
<html>

<head>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <style>
        body {
            margin: 0;
            min-width: 250px;
        }

        /* Include the padding and border in an element's total width and height */
        * {
            box-sizing: border-box;
        }

        /* Remove margins and padding from the list */
        ul {
            margin: 10px;
            padding: 10px;
        }

        /* Style the list items */
        ul li {
            cursor: pointer;
            position: relative;
            padding: 12px 8px 12px 40px;
            list-style-type: none;
            background: #eee;
            font-size: 18px;
            transition: 0.2s;

            /* make the list items unselectable */
            -webkit-user-select: none;
            -moz-user-select: none;
            -ms-user-select: none;
            user-select: none;
        }

        /* Set all odd list items to a different color (zebra-stripes) */
        ul li:nth-child(odd) {
            background: rgb(142, 232, 223);
        }

        /* Darker background-color on hover */
        ul li:hover {
            background: #ddd;
        }

        /* When clicked on, add a background color and strike out text */
        ul li.checked {
            background: #888;
            color: #fff;
            text-decoration: line-through;
        }

        /* Add a "checked" mark when clicked on */
        ul li.checked::before {
            content: '';
            position: absolute;
            border-color: #fff;
            border-style: solid;
            border-width: 0 2px 2px 0;
            top: 10px;
            left: 16px;
            transform: rotate(45deg);
            height: 15px;
            width: 7px;
        }

        /* Style the close button */
        .close {
            position: absolute;
            right: 0;
            top: 0;
            padding: 12px 16px 12px 16px;
        }

        .close:hover {
            background-color: #f44336;
            color: white;
        }

        /* Style the header */
        .header {
            background-color: #1d2029;
            padding: 30px 40px;
            color: white;
            text-align: center;
        }

        /* Clear floats after the header */
        .header:after {
            content: "";
            display: table;
            clear: both;
        }

        /* Style the input */
        input {
            margin: 0;
            border: none;
            border-radius: 10px;
            width: 75%;
            padding: 10px;
            float: left;
            font-size: 16px;
        }

        /* Style the "Add" button */
        .addBtn {
            padding: 10px;
            width: 20%;
            background:rgb(252, 127, 3);
            color: black;
            float: left;
            text-align: center;
            font-size: 16px;
            cursor: pointer;
            transition: 0.3s; 
            border-radius: 10px;
            margin-left: 10px;
            font-family: sans-serif;
        }

        .addBtn:hover {
            background-color: #fff;
        }
    </style>
</head>

<body>

    <div id="myDIV" class="header">
        <h2 style="margin:5px">My To Do List</h2>
        <input type="text" id="myInput" placeholder="What to do...">
        <span onclick="newElement()" class="addBtn">Add Task</span>
    </div>

    <ul id="myUL">
        <li>Hit the gym</li>
        <li class="checked">Pay bills</li>
        <li>Meet George</li>
        <li>Buy eggs</li>
        <li>Read a book</li>
        <li>Organize office</li>
    </ul>

    <script>
        // Create a "close" button and append it to each list item
        var myNodelist = document.getElementsByTagName("LI");
        var i;
        for (i = 0; i < myNodelist.length; i++) {
            var span = document.createElement("SPAN");
            var txt = document.createTextNode("\u00D7");
            span.className = "close";
            span.appendChild(txt);
            myNodelist[i].appendChild(span);
        }

        // Click on a close button to hide the current list item
        var close = document.getElementsByClassName("close");
        var i;
        for (i = 0; i < close.length; i++) {
            close[i].onclick = function () {
                var div = this.parentElement;
                div.style.display = "none";
            }
        }

        // Add a "checked" symbol when clicking on a list item
        var list = document.querySelector('ul');
        list.addEventListener('click', function (ev) {
            if (ev.target.tagName === 'LI') {
                ev.target.classList.toggle('checked');
            }
        }, false);

        // Create a new list item when clicking on the "Add" button
        function newElement() {
            var li = document.createElement("li");
            var inputValue = document.getElementById("myInput").value;
            var t = document.createTextNode(inputValue);
            li.appendChild(t);
            if (inputValue === '') {
                alert("You must write something!");
            } else {
                document.getElementById("myUL").appendChild(li);
            }
            document.getElementById("myInput").value = "";

            var span = document.createElement("SPAN");
            var txt = document.createTextNode("\u00D7");
            span.className = "close";
            span.appendChild(txt);
            li.appendChild(span);

            for (i = 0; i < close.length; i++) {
                close[i].onclick = function () {
                    var div = this.parentElement;
                    div.style.display = "none";
                }
            }
        }
    </script>

</body>

</html>









/////////////////////////////database connectivity//////////////////////////////////////////////////

login1.jsp
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Login Form</title>
    <style>
        body {
            font-family: Arial, sans-serif;
        }
        form {
            width: 300px;
            margin: auto;
            margin-top: 50px;
        }
        input {
            margin-bottom: 10px;
        }
    </style>
</head>
<body>
    <form action="loginform" method="post">
        <label for="email1">Email:</label>
        <input type="text" id="email1" name="email1" required/><br/>

        <label for="pass1">Password:</label>
        <input type="password" id="pass1" name="pass1" required/><br/>

        <input type="submit" value="Login"/><br/>
    </form>
</body>
</html>



login1.java
package login;

import java.io.IOException;
import java.io.PrintWriter; // Added import for PrintWriter
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet("/loginform")
public class login1 extends HttpServlet {
    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String myemail = req.getParameter("email1");
        String mypass = req.getParameter("pass1");

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/db", "root", "sujata@2727");

            PreparedStatement ps = con.prepareStatement("select * from register where myemail=? and mypass=?");
            ps.setString(1, myemail);
            ps.setString(2, mypass);

            ResultSet rs = ps.executeQuery();
            if (rs.next()) {
            	HttpSession session=req.getSession();
            	session.setAttribute("session_name", rs.getString("myemail"));
       
                RequestDispatcher rd = req.getRequestDispatcher("/profile.jsp");
                rd.include(req, resp);
            } else {
                resp.setContentType("text/html");
                PrintWriter out = resp.getWriter(); // Added PrintWriter
                out.print("<h3 style='color:red'>Email id and password didn't match</h3>");
                RequestDispatcher rd = req.getRequestDispatcher("/login1.jsp");
                rd.include(req, resp);
            }
        } catch (Exception e) {
            e.printStackTrace();
            resp.setContentType("text/html");
            PrintWriter out = resp.getWriter(); // Added PrintWriter
            out.print("<h3 style='color:red'>" + e.getMessage() + "</h3>");
            RequestDispatcher rd = req.getRequestDispatcher("/login1.jsp");
            rd.include(req, resp);
        }
    }
}



profile.jsp
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>

<h3>welcome:${session_name}</h3>

</body>
</html>






/////////////////////////////tables//////////////////////////////////////////////////
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table border="blue">
        <caption>test table by merge cells</caption>
        <thead>
            <tr>
                <th rowspan="2"></th>
                <th colspan="2">Average</th>
                <th rowspan="2">red eyes</th>
                <tr>
                
                    <th>ht</th>
                    <th>wt</th>
                </tr>
            </tr>
        </thead>
        <tbody>
            <tr>  
                <td>male</td>
                <td>1.9</td>
                <td>0.003</td>
                <td>40%</td>
            </tr>
            <tr>  
                <td>female</td>
                <td>1.8</td>
                <td>0.005</td>
                <td>49%</td>
            </tr>
        </tbody>

    </table>
</body>
</html>

// insert images///.,..,;[];'.';];'./';;'./';'./'];'.;'[]'////////////////
//     <p><b><a href="t&p2.html">Click here to Register</a></b></p>

//  .imcard {
//             background-image: url("logo.gif");
//             background-size: cover;
//             /* background-size: auto; */
//             width: 300px;
//             height: 300px;
//             background-color: rgb(38, 161, 118);
//             transform: translatey(-100px);
//             /* border-radius: 30px; */

//         }


/////////countyandcapital////////////////
countyandcapital.html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Country with Capitals</title>
    <style>
        *{

            font-family: sans-serif;
            
        }
        .container{
            margin-left: 390px;
            margin-top: 50px;
            padding: 50px;
            background-color: #ffff;
            height: 200px;
            width: 300px;
            border-radius: 20px;
        }
        h1{
            text-align: center;
        }
        body{
            background-color:rgb(252, 127, 3);
        }
        p{
            font-size: 50px;
            color:#1d2029 ;
            font-family: sans-serif;
        }
    </style>
    <script>
        function capital(){
            let cunt=document.getElementById("country").value;
            let capital="please select country";

            if (cunt == "india") {
                capital = "NEW DELHI";
            }
            if (cunt == "china") {
                capital = "BEIJING";
            }
            if (cunt == "pakistan") {
                capital = "ISLAMABAD";
            }
            if (cunt == "bangladesh") {
                capital = "DHAKA";
            }
            if (cunt == "japan") {
                capital = "TOKYO";
            }

            if (cunt == "select") {
                capital = "Please select any country";
            }
            document.getElementById("capt").innerHTML=capital;

        }
        
    </script>
</head>
<body>
    <h1> Magic App</h1>
    <div class="container">
        Select a Country : 
        <Select name="country" onchange="capital()" id="country">
            <option value="select">--SELECT--</option>
            <option value="india">INDIA</option>
            <option value="china">CHINA</option>
            <option value="pakistan">PAKISTAN</option>
            <option value="bangladesh">BANGLADESH</option>
            <option value="japan">JAPAN</option>
        </Select>
        <br>
        <br>
        <font color="green" size="6">Capital is :</font>
        <p id="capt" ></p>
    </div>
</body>
</html>


//////////////////////webside//////////////////
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form</title>
    <style>
        .form {
            margin: 15% 40%;
            padding: 20px;
            background-color: aquamarine;
            height: 150px;
        }
    </style>
</head>
<frameset rows="20%,80%">
    <frame src="navbar.html">
    <frameset cols="20%,80%">
        <frame src="frame2.html">
        <frame src="frame1.html">
    </frameset>
</frameset>
</html>

//////////////////////
navbar.html 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Navbar</title>
    <link rel="stylesheet" href="lamb.css">
</head>
<body>
    <div class="hero">
    <nav>
        <img src="images/menu.png" class="menu-img">
        <img src="images/logo.png" class="logo">
        <ul>
            <li><a href="">Home</a></li>
            <li><a href="">About Us</a></li>
            <li><a href="login.html">Login</a></li>
            <li><a href="formValidation.html">Register</a></li>
        </ul>
        <button type="button" onclick="togglebtn()" id="btn"><span></span></button>
    </nav>
    </div>
</body>
</html>
//////////////////////////////////////
frame 1.html 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Frame1</title>
</head>
<body>
    
        <!-- Your homepage content goes here -->
        <div>
            <h1>Welcome to My Website!</h1>
            <p>Explore the exciting content we have to offer.</p>
            <ul>
                <li><a href="frame1.html" target="frame">Link to Frame 1</a></li>
                <li><a href="frame2.html" target="frame">Link to Frame 2</a></li>
                <li><a href="frame3.html" target="frame">Link to Frame 3</a></li>
            </ul>
        </div>
    
        <!-- Frameset goes here -->
        
    
    
</body>
</html>

////////////////////////////////////////////////////
frame 2.html 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Frame2</title>
</head>
<body>
    <ul>
        <li><a href="">Home</a></li>
        <li><a href="">About Us</a></li>
        <li><a href="login.html">Login</a></li>
        <li><a href="formValidation.html">Register</a></li>
    </ul>
</body>
</html>
//////////////////////////////////////////////////////////

login.html 

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Page</title>
    <style>
        *{
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        body{
            height: 100vh;
            display: flex;
            align-items: center;
            justify-content: center;
            background-color: #1d2026;
        }
        .container{
            display: flex;
            flex-direction: column;
            width: 300px;
            height: 200px;
            padding: 15px;
            border:1px solid #009688;
            border-radius: 5px;
            background-color: azure;

        }
        input{
            margin:5px 0px;
            padding: 7px;
            height: 35px;
            border-radius: 5px;
            border: 1px solid #009688;
        }

        button{
            height: 35px;
            margin:5px 0px;
            background-color: skyblue;
            border: 1px solid #009688;
            border-radius: 5px;
            color:black;
            font-weight: 400;
            font-size: 15px;
            font-family: sans-serif;
        }
        button:hover{
            background-color: #333;
            color: skyblue;
        }
    </style>
</head>
<body>
    <form method="post" onsubmit="return passwordChecker()">
    <div class="container">
        
        <input type="email" placeholder="Email" required>
        <input type="password" placeholder="Password" id="pass">
        <button type="submit"><bold>Login</bold></button>
        
    </div>
    </form> 
    <script>
        function passwordChecker(){
            var pass=document.getElementById('pass').value;
            if(pass.length<8){
                alert('Password should be atleast 8 character long..');
                return false;
            }
            if(!/[A-Z]/.test(pass)){
                alert('Password should contain atleast one uppercase letter');
                return false;
            }
            if(!/[a-z]/.test(pass)){
                alert('Password should contain atleast one lowercase letter');
                return false;
            }
            if(!/[0-9]/.test(pass)){
                alert('Password should contain atleast one digit');
                return false;
            }
            if(!/[!@#$%^&*]/.test(pass)){
                alert('Password should contain atleast one special letter');
                return false;
            }
            return true;
        }
        
    </script>
</body>
</html>
/////////////////////////////////////////////////
formvalidation.html 
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>JavaScript Form Validation</title>
    <style>
        body{
            padding: 10px 50px;
        }
        .formdesign{
            font-size: 20px;
        }
        .formdesign input{
            width: 50%;
            padding: 12px 20px;
            border:1px solid blue;
            border-radius: 4px;
            margin:14px;
            font-size: 15px;
        }
        .formerror{
            color: red;
        }
        .but{
            border-radius: 9px;
            width: 100px;
            height: 50px;
            font-size: 25px;
            margin: 22px 20px;
        }
    </style>
</head>
<body>
    <h1>Welcome to best form on Internet</h1>
    <form action="/myaction.php" name="myform" onsubmit="return validateform()" method="post">
        <div class="formdesign" id="name">
            Name:<input type="text" name="fname" required><b><span class="formerror"></span></b>

        </div>
        <div class="formdesign" id="email">
            Email:<input type="email" name="femail" required><b><span class="formerror"></span></b>

        </div>
        <div class="formdesign" id="phone">
            Phone:<input type="phone" name="fphone" required><b><span class="formerror"></span></b>

        </div>
        <div class="formdesign" id="pass">
            Password:<input type="password" name="fpass" required><b><span class="formerror"></span></b>

        </div>
        <div class="formdesign" id="cpass">
            Confirm Password:<input type="password" name="fcpass"><b><span class="formerror"></span></b>

        </div>
       <input type="submit" value="Submit" class="but">
    </form>
    <script>
        function clearErrors(){
            errors=document.getElementsByClassName('formerror');
            for(let item of errors){
                item.innerHTML="";
            }
        }
        function seterror(id,error){
            element=document.getElementById(id);
            element.getElementsByClassName('formerror')[0].innerHTML=error;

        }
        function validateform() {
            var returnval = true;
            clearErrors();
            var name = document.forms['myform']['fname'].value;
            if (name.length < 5) {
                alert("Name should be at least 5 characters long.");
                seterror('name', '*Length of name is too short');
                returnval = false;
            }
            if (!/^[A-Za-z\s]+$/.test(name)) {
                alert("Name should contain only letters and spaces.");
                seterror('name', '*Name should contain only letters and spaces.');
                returnval = false;
            }

            var phone = document.forms['myform']['fphone'].value;
            if (phone.length != 10) {
                alert('*Phone number should be 10 digits');
                //seterror('phone', '*Phone number should be 10 digits');
                returnval = false;
            }
            if (!/^\d{10}$/.test(phone)) {
                alert('*Phone number should contains digits only');
                //seterror('phone', '*Phone number should be 10 digits');
                returnval = false;
            }
            var pass = document.forms['myform']['fpass'].value;

            if (pass.length < 8) {
                alert("Password should be at least 8 characters long.");
                //seterror('pass','*Password is too short (at least 8 characters required)');
                returnval= false;
            }
            if (!/[A-Z]/.test(pass)) {
                alert("Password should contain at least one uppercase letter.");
                //seterror('pass','*Password must contain at least one uppercase letter');
                 returnval = false;
            }
            if (!/[a-z]/.test(pass)) {
                alert("Password should contain at least one lowercase letter.");
                //seterror('pass','*Password must contain at least one lowercase letter');
                returnval = false;
            }
            
            if (!/[0-9]/.test(pass)) {
                alert("Password should contain at least one number.");
                //seterror('pass', '*Password must contain at least one digit');
                 returnval = false;
            }

            return returnval;
        }

            
    </script>
</body>
</html>

/////////////////////////////////////////////////////