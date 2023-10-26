#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os, sys
current_path = os.path.dirname(os.path.realpath(__file__))
sys.path.append(os.path.normpath(os.path.join(current_path, '../')))

from utils.logger import Logger

import matplotlib.pyplot as plt
import numpy as np 
from class_defs.lane_marking import LaneMarking
from class_defs.key_maker import KeyMaker
       

class LaneMarkingSet(object): # super method의 argument로 전달되려면 object를 상속해야함 (Python2에서)
    def __init__(self):
        self.lanes = dict()
        self.key_maker = KeyMaker(prefix='LM')

    def append_line(self, lane_obj, create_new_key=False):
        if create_new_key:
            idx = self.key_maker.get_new()
            while idx in self.lanes.keys():
                idx = self.key_maker.get_new()
                
            lane_obj.idx = idx 

        self.lanes[lane_obj.idx] = lane_obj

    def draw_plot(self, axes):
        for idx,  lane in self.lanes.items():
            lane.draw_plot(axes)

            
    def remove_line(self, line_obj):
        if line_obj.idx not in self.lanes.keys():
            Logger.log_error('line_obj.idx={} not in self.lines.keys()'.format(line_obj.idx))
        # remove using key
        self.lanes.pop(line_obj.idx)