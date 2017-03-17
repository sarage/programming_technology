package com.manas;

import java.util.ArrayList;
import java.util.List;

public class SolutionFinder {

    public Solution findBestSolution(List<Double> probabilities, int numberOfAttempts) {
        int numberOfExams = probabilities.size();
        if (numberOfExams == 1)
        {
            Double probability = this.calculateProbability(probabilities.get(0), numberOfAttempts);
            ArrayList<Integer> attemptsArray = new ArrayList<Integer>();
            attemptsArray.add(numberOfAttempts);
            return new Solution(probability, attemptsArray);
        }
        List<Double> probabilitiesClone = probabilities.subList(1, probabilities.size());
        Solution bestSolution = findBestSolution(probabilitiesClone, numberOfAttempts - 1);
        bestSolution.addProbability(probabilities.get(0), 1);
        for (int i = 2; i < numberOfAttempts; i++) {
            Solution solution = findBestSolution(probabilitiesClone, numberOfAttempts - i);
            Double probability = calculateProbability(probabilities.get(0), i);

            if (solution.getProbability() + probability > bestSolution.getProbability()) {
                bestSolution = solution;
                bestSolution.addProbability(probability, i);
            }
        }
        return bestSolution;
    }

    private Double calculateProbability(Double probability, int numberOfAttempts) {
        return (1 - Math.pow(1 - probability, numberOfAttempts));
    }
}
