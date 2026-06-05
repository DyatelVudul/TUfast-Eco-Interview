import pytest
from sol import Sol


class TestSolution:

    def setup_method(self):
        self.solution = Sol()

    def test_helloString_Return13(self):
        assert self.solution.scoreOfString("hello") == 13

    def test_nullString(self):
        assert self.solution.scoreOfString(None) == -1

    def test_emptyString_Returns0(self):
        assert self.solution.scoreOfString("") == 0

    def test_zazString_Return50(self):
        assert self.solution.scoreOfString("zaz") == 50

    def test_specialCharactersIgnore(self):
        assert self.solution.scoreOfString("\t\n") == 0
