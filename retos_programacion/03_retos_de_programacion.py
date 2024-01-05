import random


def race(track_length: int):

    track1, track2 = create_tracks(track_length)

    print_race(track1, track2)

    position1, positon2 = len(track1) - 1, len(track2) - 1

    while True:
        position1 -= random.randint(1, 3)
        position2 -= random.randint(1, 3)


def create_tracks(track_length: int) -> (list, list):

    track = [" _ "] * track_length

    def add_trees(track: list) -> list:
        trees = random.randint(1, 3)
        for _ in range(trees):
            position = random.randint(0, len(track) - 1)
            track[position] = "🌲"

        return (track)

    track1, track2 = add_trees(track.copy()), add_trees(track.copy())

    track1.insert(0, "🏁")
    track1.append("🚗")
    track2.insert(0, "🏁")
    track2.append("🚐")

    return (track1, track2)


def print_race(track1: list, track2: list):
    print("".join(track1))
    print("".join(track2))


race(20)
