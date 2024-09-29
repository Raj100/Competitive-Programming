// Copyright (c) 2017 Uber Technologies, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
// Code generated by mockery v1.0.0. DO NOT EDIT.

package mocks

import (
	mock "github.com/stretchr/testify/mock"
	metrics "github.com/temporalio/temporal/common/metrics"

	time "time"
)

// Scope is an autogenerated mock type for the Scope type
type Scope struct {
	mock.Mock
}

// AddCounter provides a mock function with given fields: counter, delta
func (_m *Scope) AddCounter(counter int, delta int64) {
	_m.Called(counter, delta)
}

// IncCounter provides a mock function with given fields: counter
func (_m *Scope) IncCounter(counter int) {
	_m.Called(counter)
}

// RecordHistogramDuration provides a mock function with given fields: timer, d
func (_m *Scope) RecordHistogramDuration(timer int, d time.Duration) {
	_m.Called(timer, d)
}

// RecordHistogramValue provides a mock function with given fields: timer, value
func (_m *Scope) RecordHistogramValue(timer int, value float64) {
	_m.Called(timer, value)
}

// RecordTimer provides a mock function with given fields: timer, d
func (_m *Scope) RecordTimer(timer int, d time.Duration) {
	_m.Called(timer, d)
}

// StartTimer provides a mock function with given fields: timer
func (_m *Scope) StartTimer(timer int) metrics.Stopwatch {
	ret := _m.Called(timer)

	var r0 metrics.Stopwatch
	if rf, ok := ret.Get(0).(func(int) metrics.Stopwatch); ok {
		r0 = rf(timer)
	} else {
		r0 = ret.Get(0).(metrics.Stopwatch)
	}

	return r0
}

// Tagged provides a mock function with given fields: tags
func (_m *Scope) Tagged(tags ...metrics.Tag) metrics.Scope {
	_va := make([]interface{}, len(tags))
	for _i := range tags {
		_va[_i] = tags[_i]
	}
	var _ca []interface{}
	_ca = append(_ca, _va...)
	ret := _m.Called(_ca...)

	var r0 metrics.Scope
	if rf, ok := ret.Get(0).(func(...metrics.Tag) metrics.Scope); ok {
		r0 = rf(tags...)
	} else {
		if ret.Get(0) != nil {
			r0 = ret.Get(0).(metrics.Scope)
		}
	}

	return r0
}

// UpdateGauge provides a mock function with given fields: gauge, value
func (_m *Scope) UpdateGauge(gauge int, value float64) {
	_m.Called(gauge, value)
}
