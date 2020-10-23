class Person():

    def __init__(self, name, id, age):
            self.name = name
            while(len(name) >10):
                self.name = input("Name is too long, enter new name shorter than 11: ")
            self.id = int(id)
            self.age = int(age)

    def print(self):
        print("Name: {0} \nId: {1} \nAge: {2}\n". format(self.name, self.id, self.age))






