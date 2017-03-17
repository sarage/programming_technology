package com.manas;

import org.junit.Assert;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;

@RunWith(Parameterized.class)
public class SolutionFinderTest {

    private Double[] probabilitiesArray;
    private Integer numberOfAttempts;
    private Integer[] expecteds;
    private Double expectedProbability;

    public SolutionFinderTest(Double[] probabilitiesArray, Integer numberOfAttempts, Integer[] expecteds, Double expectedProbability) {

        this.probabilitiesArray = probabilitiesArray;
        this.numberOfAttempts = numberOfAttempts;
        this.expecteds = expecteds;
        this.expectedProbability = expectedProbability;
    }

    @Test
    public void shouldFindBestSolution() {
        ArrayList<Double> probabilities = new ArrayList<Double>(Arrays.asList(probabilitiesArray));
        SolutionFinder solutionFinder = new SolutionFinder();
        Solution bestSolution = solutionFinder.findBestSolution(probabilities, numberOfAttempts);
        ArrayList<Integer> attemptsArray = bestSolution.getAttemptsArray();
        Assert.assertEquals(expectedProbability , bestSolution.getProbability());
        Assert.assertArrayEquals(expecteds, attemptsArray.toArray());
    }

    @Parameterized.Parameters
    public static Collection<Object[]> data() {
        return new ArrayList<Object[]>() {{
            add(new Object[]{
                    new Double[]{0.5, 0.7},
                    3,
                    new Integer[]{2, 1},
                    1.45
            });

            add(new Object[]{
                    new Double[]{0.7, 0.5},
                    3,
                    new Integer[]{1, 2},
                    1.45
            });

            add(new Object[]{
                    new Double[]{1.0, 0.5},
                    3,
                    new Integer[]{1, 2},
                    1.75
            });

            add(new Object[]{
                    new Double[]{1.0, 0.5},
                    5,
                    new Integer[]{1, 4},
                    2 - Math.pow(0.5, 4)
            });
        }};
    }
}