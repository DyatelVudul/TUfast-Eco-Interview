import pytest
from sol import Sol


class TestSolution:

    def setup_method(self):
        self.solution = Sol()

    def test_returnNotNull(self):
        assert self.solution.findDegrees([[0,1,1],[1,0,1],[1,1,0]]) is not None

    def test_threeFullyConnectedVertices(self):
        assert self.solution.findDegrees([[0,1,1],[1,0,1],[1,1,0]]) == [2, 2, 2]

    def test_twoOfThreeVerticesConnected(self):
        assert self.solution.findDegrees([[0,1,0],[1,0,0],[0,0,0]]) == [1, 1, 0]

    def test_noVerticesConnected(self):
        assert self.solution.findDegrees([[0,0,0],[0,0,0],[0,0,0]]) == [0, 0, 0]

    def test_passNoMatrix(self):
        assert self.solution.findDegrees(None) is None
