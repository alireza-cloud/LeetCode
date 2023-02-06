def romanToInt(self,s):
    # Define a dictionary of Roman numerals and their integer equivalents
    roman_to_int_mapping = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    # Initialize the result to 0
    result = 0

    # Iterate through the string
    for i in range(len(s)):
        # Get the value of the current Roman numeral
        value = roman_to_int_mapping[s[i]]

        # Check if the next Roman numeral has a higher value
        if i + 1 < len(s) and roman_to_int_mapping[s[i + 1]] > value:
            # If so, subtract the current value from the result
            result -= value
        else:
            # Otherwise, add the current value to the result
            result += value

    # Return the result
    return result
