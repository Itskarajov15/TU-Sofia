class Person():
    def __init__(self, name, family, age, nationality):
        self.name = name
        self.family = family
        self.age = age
        self.nationality = nationality

    def PrintInfoAboutPerson(self):
        print(self.name, self.family, self.age, self.nationality)    


class Student(Person):
    def __init__(self, name, family, age, nationality, university, yearOfStudy):
        super().__init__(name, family, age, nationality)
        self.university = university
        self.yearOfStudy = yearOfStudy

    def PrintInfoAboutPerson(self):
        print(self.name, self.family, self.age, self.nationality, self.university, self.yearOfStudy)    

class Lecturer(Person):
    def __init__(self, name, family, age, nationality, university, experience):
        super().__init__(name, family, age, nationality)
        self.university = university
        self.experience = experience

    def PrintInfoAboutPerson(self):
        print(self.name, self.family, self.age, self.nationality, self.university, self.experience)

person = Person('Asen', 'Karadzhov', 19, 'Bulgarian')
student = Student('Asen', 'Karadzhov', 19, 'Bulgarian', 'TU-Sofia', 1)            
lecturer = Lecturer('Asen', 'Karadzhov', 19, 'Bulgarian', 'TU-Sofia', 25)

person.PrintInfoAboutPerson()
student.PrintInfoAboutPerson()
lecturer.PrintInfoAboutPerson()

