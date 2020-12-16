import sys
import xml.etree.ElementTree as etree

def get_attr_number(node):
    return etree.tostring(node).count(b'=')

if __name__ == '__main__':