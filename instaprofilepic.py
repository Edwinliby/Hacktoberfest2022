from xml.etree.ElementTree import Comment
import instaloader
#program to download insta profile pic 
ig= instaloader.Instaloader()

userid = input("enter user id")

ig.download_profile(userid,profile_pic=True)
