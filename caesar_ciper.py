alphabate = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
direction = input("Type 'encode' to encrypte type 'decode' to decrypt:\n")
text = input("Type your message:\n").lower()
shift = int(input("Type the shift number:\n"))
#dont change the code above
#T00000
def encrypt(plain_text, shift_amount):
     chiper_text =""

     for letter in plain_text:
        position =  alphabate.index(letter)
        new_position = position + shift_amount
        new_letter = alphabate[new_position]
        chiper_text += new_letter
    print("The encoded text is {chiper_text}")








    encrypt(plain_text,shift_amount=shift)