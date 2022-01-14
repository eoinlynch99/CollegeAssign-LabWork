class Enemy:
    life = 3

    def attack(self):
        print('ouch!')
        self.life -= 1

    def checklife(self):
        if self.life <= 0:
            print('I am dead')
        else:
            print(str(self.life) + " life left")


class defence(Enemy):

    def health(self):
        if self.life <= 1:
            self.life = self.life + 1
        else:
            return self.life

enemy1 = Enemy()
enemy2 = Enemy()
healthl = defence()

healthl.health()
enemy1.attack()
enemy2.attack()
enemy1.checklife()
enemy2.checklife()
