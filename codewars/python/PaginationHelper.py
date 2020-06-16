#https://www.codewars.com/kata/515bb423de843ea99400000a

# referencias
#https://pt.stackoverflow.com/questions/109013/quando-devo-usar-init-em-fun%C3%A7%C3%B5es-dentro-de-classes
#https://www.geeksforgeeks.org/floor-ceil-function-python/

# TODO: complete this class
import math
class PaginationHelper:

    # The constructor takes in an array of items and a integer indicating
    # how many items fit within a single page
    def __init__(self, collection, items_per_page):
        self.collection = collection
        self.ipp = items_per_page

    # returns the number of items within the entire collection
    def item_count(self):
        return len(self.collection)


    # returns the number of pages
    def page_count(self):
        return math.ceil(len(self.collection) / self.ipp)

    # returns the number of items on the current page. page_index is zero based
    # this method should return -1 for page_index values that are out of range
    def page_item_count(self,page_index):
        if page_index < 0 or page_index >= self.page_count():
            return -1
        elif page_index < len(self.collection) // self.ipp:
            return self.ipp
        else:
            return len(self.collection) % self.ipp

    # determines what page an item is on. Zero based indexes.
    # this method should return -1 for item_index values that are out of range
    def page_index(self,item_index):
        if item_index < 0 or item_index >= len(self.collection):
            return -1
        return int(item_index / self.ipp)
