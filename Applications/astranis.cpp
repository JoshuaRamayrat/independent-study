/*
Write a function, in the programming language of your choice, which finds contiguous regions 
(or "islands") in a matrix where all values in the island are greater than a threshold (but not necessarily the same). 

The function should take a threshold, a minimum island size, and an arbitrarily sized matrix as inputs. 

The function should output a matrix (same size as the input matrix) of booleans. 

Do not wrap around matrix edges. 

Corner neighbors are not sufficient for island continuity. For example, if the the inputs are: threshold = 5, min island size = 3, 
and matrix = [4, 4, 4, 2, 2; 
              4, 2, 2, 2, 2; 
              2, 2, 8, 7, 2; 
              2, 8, 8, 8, 2; 
              8, 2, 2, 2, 8]

Then the output would be [0, 0, 0, 0, 0; 
                          0, 0, 0, 0, 0; 
                          0, 0, 1, 1, 0; 
                          0, 1, 1, 1, 0; 
                          0, 0, 0, 0, 0].



    Addressing the minimum island size problem...
        Append the first element that meets the threshold to a vector.
        Keep appending elements that are connected to this element that meet the threshold to the same vector.


[1, 1, 0, 0, 0, 0; 
 1, 1, 0, 0, 0, 0; 
 0, 1, 1, 0, 0, 0; 
 0, 0, 0, 1, 0, 1; 
 0, 1, 1, 1, 0, 1;
 0, 0, 1, 1, 1, 1].                          
0
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n = 10;

std::vector<std::vector<int>> func(int threshold, int islandSize, int matTest[][n]);


int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";
}


/*
    Addressing the minimum island size...
        Append the first element that meets the threshold to a vector.
        Keep appending elements that are connected to this element that meet the threshold to the same vector.
*/
std::vector<std::vector<int>> func(int threshold, int islandSizeMin, int matTest[][n])
{
    std::vector<std::vector<int>> boolArr;
    
    int islandSize=0;
    
    int rows =  sizeof(boolArr) / sizeof(boolArr[0]);  
    int cols = sizeof(boolArr[0]) / sizeof(int); 
    
    // Looping through the matrix and setting all values that meet the threshold to 1 and all else to 0. 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matTest[i][j] > threshold)
            {
                boolArr[i][j] = 1;
            }
            else 
            {
                boolArr[i][j] = 0;
            }
        }
    }

    // If an element meets the threshold criteria but isn't part of an island, then set it to 0. 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (boolArr[i+1][j] != 1 && boolArr[i-1][j] != 1 && boolArr[i][j+1] != 1 && boolArr[i][j-1] != 1)
            {
                boolArr[i][j] = 0;
            }
        }
    }
    
    // Minimum island size...
    int vecSize = col*rows;
    vector<vector<int>> fooVec(vecSize);
    int dim1 = 0;
    int dim2 = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (boolArr[i][j] = 1 && boolArr[i+1][j] = 1 || 
                boolArr[i][j] = 1 && boolArr[i][j+1] = 1)
            {
                boolArr[i][j] = fooVec[dim1][dim2];
                dim1++;
            }
        }
    }
    
    return  boolArr;
}