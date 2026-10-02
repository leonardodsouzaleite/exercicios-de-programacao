from manim import Scene, Square, Circle
from manim import Create, Transform


class Animacao(Scene):
    def construct(self):
        c = Circle
        q = Square

        self.play(Create(c))
        self.play(Transform(c, q))
