package com.javarush.test.level07.lesson04.task01;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/* ������������ ����� ������� �� 20 �����
1. � ������ initializeArray():
1.1. �������� ������ �� 20 �����
1.2. �������� � ������� 20 ����� � ��������� ��� ������
2. ����� max(int[] array) ������ �������� ������������ ����� �� ��������� �������
*/

public class Solution
{
    public static void main(String[] args) throws Exception
    {
        int[] array = initializeArray();
        int max = max(array);
        System.out.println(max);
    }
    public static int[] initializeArray() throws IOException {
        int[] list =  new int[20];
        BufferedReader reader =  new BufferedReader(new InputStreamReader(System.in));
        for (int i=0;i<20;i++)
        {
            list[i] = Integer.parseInt(reader.readLine());
        }
        return null;
    }

    public static int max(int[] array) {
        int max=list[0];
        for (int i=0;i<20;i++)
        {
            if(list[i]>max)
            max=list[i];
        }
        return 0;
    }
}
