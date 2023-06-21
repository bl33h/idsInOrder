# idsInOrder
A program that allows users to input a set of ID numbers and arranges them in ascending order. The program prompts the user to enter the number of IDs they want to order and then requests additional information for each ID, such as name, lastname, and the last number of the CUI. The entered ID numbers are stored in an array. The program then sorts the array in ascending order using the C++ standard library's sort function. Finally, it displays the ordered list of IDs to the user. Overall, the code provides a simple and efficient way to organize ID numbers in a specific order.

<p align="center">
  <br>
  <img src="https://64.media.tumblr.com/61c5da5f29d357873e7c7fc0a0e30115/9b9e087dfb6b6567-c8/s540x810/fa8447127072e1d340624d23fcf2967404f5022f.gif" alt="pic" width="500">
  <br>
</p>
<p align="center" >
  <a href="#Files">Files</a> •
  <a href="#Features">Features</a> •
  <a href="#how-to-use">How To Use</a> 
</p>

## Files

- src: the file that implements de solution.
- flowchart: flowchart: the model construction.

## Features
The main features of the application include:
- Requesting ID Numbers: The program prompts the user to enter the number of IDs to order and then creates an array of that size to store the IDs. It further asks for the name, lastname, and last number of the CUI (Control Unique Identity) for each ID and assigns them to the corresponding array elements.
- Sorting IDs: The program includes a method called "IDsInOrder" that sorts the array of IDs in ascending order using the sort function from the C++ Standard Library. After sorting, it prompts the user to enter the number of IDs they placed in the input and then displays the sorted IDs in the console.
- Memory Management: The program uses the delete[] operator to deallocate the memory allocated for the ID array, ensuring proper memory management.

## How To Use
To clone and run this application, you'll need [Git](https://git-scm.com) and a [C++ compiler](https://www.fdi.ucm.es/profesor/luis/fp/devtools/mingw.html) installed on your computer. From your command line:

```bash
# Clone this repository
$ git clone https://github.com/bl33h/idsInOrder

# Open the folder
$ cd src

# Run the app
$ g++ idsInOrder.cpp -o idsInOrder
$ ./idsInOrder
```

Alternatively, you can run the code using Google Colab:
1. [Open Google Colab](https://colab.research.google.com) in your web browser.
2. Click on "File" in the top menu, then select "Open notebook".
3. In the "GitHub" tab, enter the repository URL: https://github.com/bl33h/idsInOrder
4. Choose the desired notebook file and click "Open".
5. Follow the instructions within the Colab notebook to execute the code.

Note: Running the code in Google Colab requires an internet connection and a Google account. It provides a convenient online environment for executing code without the need for local setup or dependencies.
