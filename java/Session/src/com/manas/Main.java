package com.manas;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);
        System.out.println("enter a number of attempts");
        int numberOfAttempts = keyboard.nextInt();
        System.out.println("enter a number of exams");
        int numberOfExams = keyboard.nextInt();
        ArrayList<Double> probabilities = new ArrayList<Double>();
        for (int i = 1; i <= numberOfExams; i++) {
            System.out.println(String.format("enter a probability for exam %s", i));
            Double probability = keyboard.nextDouble();
            probabilities.add(probability);
        }
        SolutionFinder solutionFinder = new SolutionFinder();
        Solution bestSolution = solutionFinder.findBestSolution(probabilities, numberOfAttempts);
        ArrayList<Integer> attemptsArray = bestSolution.getAttemptsArray();
        for (Integer integer : attemptsArray) {
            System.out.print(integer + " ");
        }
    }
}

