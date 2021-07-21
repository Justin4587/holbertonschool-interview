#!/usr/bin/python3


def canUnlockAll(boxes):
    """ numbers in lists """

    copy_box = [False for l in range(len(boxes))]
    copy_box[0] = True
    keys = set(boxes[0])
    new_keys = set()
    total_boxes = len(boxes)
    added = True

    if (total_boxes == 0):
        return True

    while added:
        added = False
        keys = keys | new_keys
        new_keys = set()

        for i in keys:
            if (i < total_boxes):
                copy_box[i] = True
                for j in boxes[i]:
                    
                    if j not in keys:
                        new_keys.add(j)
                        added = True
                
    return all(copy_box)
