import pytest
from sol import Sol


class TestSolution:

    def setup_method(self):
        self.solution = Sol()

    def test_threeNumsFiveSteps_ReturnFour(self):
        assert self.solution.minOperations([3, 9, 7], 5) == 4

    def test_threeNumsFourSteps_ReturnZero(self):
        assert self.solution.minOperations([4, 1, 3], 4) == 0

    def test_twoNumsSixSteps_ReturnFive(self):
        assert self.solution.minOperations([3, 2], 6) == 5
