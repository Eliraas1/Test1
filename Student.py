from Person import Person

class Student(Person):

    def __init__(self, name, id, age, average, institute):
        Person.__init__(self, name, id, age)
        self.average = float(average)
        self.institute = institute
        while(len(self.institute) > 10):
            self.institute = input("Enter shorter instiute's name:")
        self.institute = self.institute.title()

    def __str__(self):
        #print operator
        print("-----------")
        return f'{Person.__str__(self)}Institute: {self.institute}\nAverage: {self.average}\n'




