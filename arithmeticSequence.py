def check_index(key):
    """
    Is the given key an acceptable index?
    """
    if not isinstance(key, int):
        raise TypeError
    if key < 0:
        raise IndexError

class ArithmeticSequence:
    def __init__(self, start=0, step=1):
        """
        Initialize the arithmetic sequence.
        :param start: the first value in sequence
        :param step: the difference between two adjacent values
        """
        self.start = start
        self.step = step
        # 'changed' is a dictionary of values that have been modified by user
        self.changed = {}

    def __getitem__(self, key):
        """
        Get an item from the arithmetic sequence
        """
        check_index(key)
        try:
            return self.changed[key]
        except KeyError:
            return self.start + key*self.step

    def __setitem__(self, key, value):
        """
        Change an item in the arithmetic sequence
        """
        check_index(key)
        self.changed[key] = value
