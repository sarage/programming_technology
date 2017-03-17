package com.manas;

import java.util.ArrayList;

public class Solution {

    private Double probability;
    private ArrayList<Integer> attemptsArray;

    public Solution(Double probability, ArrayList<Integer> attemptsArray) {
        this.probability = probability;
        this.attemptsArray = attemptsArray;
    }

    public ArrayList<Integer> getAttemptsArray() {
        return attemptsArray;
    }

    public void addProbability(Double probability, int attempt) {
        this.probability += probability;
        attemptsArray.add(0, attempt);
    }

    public Double getProbability() {
        return probability;
    }
}
