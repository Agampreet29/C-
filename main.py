print ("Welcome to Python Quiz")
question = "What is the national game of India?"
print(question)
options = "a.Cricket\nb.Football\nc.Hockey\nd.BasketBall"
print(options)

answer = input("Choose the correct option:")

score=0
if answer=="c":
  print("You are correct!")
  score = score+10
  print("Your score is",score)
 
else:
  if answer not in ["a","b","d"]:
    print ("INVALID OPTION")
    print("Your score is ",score)
  else:
    print("You are incorrect!")
    score = score-5
    print("Your score is",score)

  

