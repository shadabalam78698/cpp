import random
import sys

while True:
    print "Pick 1-3"
    print "Choose difficulty: easy(1), medium(2), hard(3)"
    diff = input()
    if diff == 1:
        max = 10
        count = 5
    elif diff == 2:
        max = 50
        count = 20
    elif diff == 3:
        max = 100
        count = 30
    else:
        print "Pick a number between 1-3"
        continue
    num = random.randint(0,max)
    if True:
        guess = input("Guess number: ")
        if guess > num:
            print "Guess is too high"
            count = count - 1
            print "Tries: " + str(count)
            if count > 0:
                continue
            elif count == 0:
                print "You are out of guesses. You Lose"
                sys.exit()
            
        elif guess < num:
            print "Guess is too low"
            count = count - 1
            print "Tries: " + str(count)
            if count > 0:
                continue
            elif count == 0:
                print "You are out of guesses. You Lose"
                sys.exit()

        elif guess == num:
            print "Correct!"
            print "You won in %d tries"
            print "Play again? y or n"
            ans = raw_input()
            if ans == str.lower("y"):
                break
            elif ans == str.lower("n"):
                sys.exit()
            else:
                print "please answer 'y' or 'n'"
                ans = raw_input()
                if ans == str.lower("y"):
                    break
                elif ans == str.lower("n"):
                    sys.exit()
                else:
                    print "OK i'll choose for you."
                    sys.exit()