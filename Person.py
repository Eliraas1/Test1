class Person():

    def __init__(self, name, id, age):

            self.name = name
            while(len(self.name) >10):
                self.name = input("Name is too long, enter new name shorter than 11: ")
            self.name=self.name.title()
            self.id = int(id)
            self.age = int(age)

    def __str__(self):
        #print operator
        return f'Name:{self.name}\nID:{self.id}\nAge:{self.age}\n'
