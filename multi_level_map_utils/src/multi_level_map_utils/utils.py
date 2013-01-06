#!/usr/bin/env python

def construct(level_id, suffix):
  assert '/' not in level_id, "level id cannot contain forward slash"
  return '/' + level_id + '/' + suffix

def deconstruct(level_id, suffix):
  pass

def frameIdFromLevelId(level_id):
  return construct(level_id,'map')

def mapTopicFromLevelId(level_id):
  return construct(level_id,'map')

def metadataTopicFromLevelLevelId(level_id):
  return construct(level_id,'map_metadata')

def levelIdFromLevelFrameId(frame_id):
  components = frame_id.split('/')
  assert len(components) == 3 and components[0] == '' and components[2] == 'map', "malformed frame id provided for obtaining level id"
  return components[1] 

def levelIdFromLevelMapTopic(map_topic):
  return levelIdFromLevelFrameId(map_topic)
