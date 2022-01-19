import json

jsonInString = '{"name": "Asen"}'

dictionary = json.loads(jsonInString)

print(dictionary["name"])