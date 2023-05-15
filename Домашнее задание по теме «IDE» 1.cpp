// Домашнее задание по теме «IDE» 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>


int main()
{
    std::ifstream wf1;
    wf1.open("in.txt");
    // std::cout << wf1 .is_open() << std::endl;
    int size1, size2;  

    wf1 >> size1;

    int* arr = new int[size1];
    for (int i = 0; i < size1; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < size1; i++)
    {
        wf1 >> arr[i];
    }

    std::cout << size1<< std::endl;
    for (int i = 0; i < size1; i++) //вывод массива 
    {
        std::cout << arr[i] << " ";
    }    
    std::cout << std::endl;


    wf1 >> size2;
    int* arr1 = new int[size2];
    for (int i = 0; i < size2; i++)
    {
        arr1[i] = i;
    }

    for (int i = 0; i < size2; i++)
    {
        wf1 >> arr1[i];
    }

    std::cout << size2 << std::endl;
    for (int i = 0; i < size2; i++) //вывод массива 
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    wf1.close();

    int temp = arr1[size2 - 1];

    for (int i = size2 - 1; i >= 1; --i) {
        arr1[i] = arr1[i - 1];
        arr1[i - 1] = temp;
    }

    
    std::ofstream rf;
    rf.open("out.txt"/*, std::ofstream::app*/);
    //std::cout << rf .is_open() << std::endl;
    rf << size2;
    rf << "\n";
    for (int i = 0; i < size2; i++)
    {
        rf << arr1[i] << " ";
    }
    rf << "\n";

    int temp1 = arr[0];    
    for (int i = 1; i < size1; i++)
        arr[i - 1] = arr[i];    
    arr[size1 - 1] = temp1;
    
    rf << size1;
    rf << "\n";
    for (int i = 0; i < size1; i++)
    {
        rf << arr[i] << " ";
    }
    rf.close();
    delete[] arr;
    delete[] arr1;

    std::cout << std::endl;

    std::ifstream wf;
    wf.open("out.txt");
     //std::cout << wf .is_open() << std::endl;
    int size, size3;

    wf >> size;

    int* arrl = new int[size];
    for (int i = 0; i < size; i++)
    {
        arrl[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        wf >> arrl[i];
    }

    std::cout << size << std::endl;
    for (int i = 0; i < size; i++) //вывод массива 
    {
        std::cout << arrl[i] << " ";
    }
    std::cout << std::endl;


    wf >> size3;
    int* arrw = new int[size3];
    for (int i = 0; i < size3; i++)
    {
        arrw[i] = i;
    }

    for (int i = 0; i < size3; i++)
    {
        wf >> arrw[i];
    }

    std::cout << size3 << std::endl;
    for (int i = 0; i < size3; i++) //вывод массива 
    {
        std::cout << arrw[i] << " ";
    }
    
    wf.close();
    delete[] arrl;
    delete[] arrw;
        return 0; 
}