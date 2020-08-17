import base64

MESSAGE = '''
CUYYEBALAgAWTEhbUgkBHRcVAUlJUkYICh8EAhICHg1GUhRGSBcHAQsAHwQPQl9IQBYDDQcTBl1B T0hUUgcLERMOARoKCxZCR0hGE00OBhcCEAMAHBVMRUlIQAYLBwcCGUsCSF5UUhwEEAMCEQBPR0lF TBsAFEtBQ1JTEwEKVUFRRVQfDh1ETBU=
'''

KEY = 'rakeshgsekhar.fortune'

result = []
for i, c in enumerate(base64.b64decode(MESSAGE)):
    result.append(chr(c ^ ord(KEY[i % len(KEY)])))

print(''.join(result))
