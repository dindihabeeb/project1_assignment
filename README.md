## Project 1_Assignment 

## Question 1

- **Real-world Application:** The C programming language is used in building embedded systems solutions such as microwaves and smart TVs, amongst others. 

- **Syntax vs Semantic Errors:** Syntax errors are errors that violate the rules of the language, making un-understandable by the compiler, such as missing a semicolon after a statement. Semantic errors are errors that occur due to flawed logic, such as using the multiplication operator in an addition operation. 

- **C Compilation Stages:** 

   - **Preprocessing:** The preprocessor handles include directives and macros (lines that 

   - start with a \#) and expands the file by replacing them with their actual code. The input file is a .c file, the flag -E is used, and the output is a .i file (preprocessed code). e.g., _gcc -E main.c_ -o main.i 

   - **Compilation:** This is the second stage of the compilation process. The preprocessed 

   - C file is translated into assembly language specific to the host machine’s CPU architecture. The input file is a .i file, the flag -S is used, and the output is a .s file. e.g., _gcc -S main.i -o main.s_ 

   - **Assembly:** This is the stage where the human-readable assembly code is translated 

   - into machine language (binary format). The input file is a .s file, and the output file is a .o object code in binary. The -c flag is used when creating an object code from an input compiled file. e.g., _gcc -c main.s -o main.o_ 

- **Linking:** The linker links the object file with other object files and other standard 

- libraries. The input file is a .o object file, and the output is an executable .out binary file. 

e.g., gcc main.s -o main 

## Question 2 

- **while (1):** This creates an infinite loop to make the program keep running until the break statement executes, which happens when the user selects the exit option, 3. 

- **break:** Inside the if and switch statements, break stops the execution of the current loop, exiting the menu loop or ending a specific case. 

- **continue:** When the user enters an out-of-range number, continue immediately restarts the while loop, skipping the rest of the code block. 

## Question 3 

- Recursion is a phenomenon that occurs when a function calls itself multiple times on smaller subsets of a problem until a specific condition is met. 

- One of the main advantages of recursion is that it makes one’s code shorter and easier to read, better than iterative approaches. It’s also de facto for certain mathematical concepts, such as the Fibonacci sequence. 

- Recursive functions are generally slower than loops, due to the overhead of calling functions repeatedly and managing the stack. It’s also harder to debug recursive functions. 

## Question 4 

- The data flow starts with the **TMP36 sensor** measuring the physical room heat and translating it into a raw analog voltage signal. That analog signal flows into the Arduino's **A0 pin** , where the board translates it into a digital number that C++ code can actually read. The code then converts that number into degrees Celsius and checks if it has crossed your **28°C** threshold. When the threshold is crossed, the code makes a decision and sends a digital HIGH signal out of **Pin 2** , which acts as a trigger to turn on the actuator (piezo-buzzer) and make a sound. 


## Question 5 

Embedded systems use microcontrollers to gather physical data, like a sensor continuously monitoring ambient temperature. Functions organize the system's workload, running continuous modular loops to mathematically translate that raw hardware voltage into readable metrics. Control flow provides the decision-making logic, using strict conditional statements to trigger actions, like activating a motor if the heat exceeds a set threshold. 

